#pragma once

#include <stdint.h>
#include <stdbool.h>

/*
#ifdef WIN32
	#ifdef VIRTUALMACHINE_EXPORTS 
		#define VM_API __declspec(dllexport)
	#else
		#define VM_API __declspec(dllimport)
	#endif
#else
	#define VM_API
#endif
*/

/* DEFINES */
#define REGS_COUNT 8

typedef enum FLAGS {
	FZ,
	FC,
	SIZE_OF_FLAGS
}FLAGS;

typedef uint32_t uint;

typedef struct vm_t vm_t;
typedef bool (*command)(vm_t*);

enum regs {
	AX,		/* accumulator */
	BX,
	CX,
	DX,
	SI,		/* source index */
	DI,		/* destination index */
	PC,		/* program counter */
	SP		/* stack pointer */
};

/* definition of cpu */
typedef struct cpu_t
{
	uint regs[REGS_COUNT];
	bool is_halt;		/* */
	uint8_t oc;
	command cmd;
	uint flags[SIZE_OF_FLAGS];  /* */
}cpu_t;

typedef struct memory_t
{
	uint8_t *ram;
	size_t size;
}memory_t;

typedef struct vm_t
{
	cpu_t *cpu;
	memory_t *memory;
	memory_t *stack;
}vm_t;


/* DEFINES */
#define fetch(vm) (vm->memory->ram[vm->cpu->regs[PC]++]) 
#define decode(oc, tab) (tab[oc])
#define execute(vm, cmd) (cmd(vm))

#define fetch_dword(vm) (*((uint*)&(vm->memory->ram[(vm->cpu->regs[PC])++])))
#define peek_dword(vm, ofst) (*((uint*)&(vm->memory->ram[ofst])))
#define peek_ptr(vm, ofst) (((uint*)&(vm->memory->ram[ofst])))

#define push_dword(vm, val) (*((uint*)&(vm->stack->ram[(vm->cpu->regs[SP]++)])) = val)
#define pop_dword(vm) *((uint*)&(vm->stack->ram[--(vm->cpu->regs[SP])]))

typedef bool (*command)(vm_t*);

/* block of commands for processor */
void nop(vm_t *vm);

void hlt(vm_t * vm);

void psh(vm_t * vm);

void pop(vm_t * vm);

void prt(vm_t * vm);

void vm_reset(vm_t * cpu);

void vm_setProgram(vm_t * vm, uint8_t * program, size_t size);

cpu_t * vm_createCpu();

memory_t * vm_createMemory(uint8_t * ram, size_t size);

vm_t * vm_create(memory_t * program, size_t stack_size);

int vm_run(vm_t * vm);
