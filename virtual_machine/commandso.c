#include "vm.h"
#include "fnc_proto.h"
#include <stdio.h>

void aaa_command(vm_t *vm)
{

}

void aad_command(vm_t *vm)
{

}

void aam_command(vm_t *vm)
{

}

void aas_command(vm_t *vm)
{

}

void adc_command(vm_t *vm)
{

}

void add_command(vm_t *vm)
{

}

void and_command(vm_t *vm)
{

}

void call_command(vm_t *vm)
{

}

void cbw_command(vm_t *vm)
{

}

void clc_command(vm_t *vm)
{

}

void cld_command(vm_t *vm)
{

}

void cli_command(vm_t *vm)
{

}

void cmc_command(vm_t *vm)
{

}

void cmp_command(vm_t *vm)
{

}

void cmpsb_command(vm_t *vm)
{

}

void cmpsw_command(vm_t *vm)
{

}

void cwd_command(vm_t *vm)
{

}

void daa_command(vm_t *vm)
{

}

void das_command(vm_t *vm)
{

}

void dec_command(vm_t *vm)
{

}

void div_command(vm_t *vm)
{

}

void hlt_command(vm_t *vm)
{
	printf("%04x: %s\n", vm->cpu->regs[PC] - 1, __func__);
	vm->cpu->is_running = false;
}

void idiv_command(vm_t *vm)
{

}

void imul_command(vm_t *vm)
{

}

void in_command(vm_t *vm)
{

}

void inc_command(vm_t *vm)
{

}

void int_command(vm_t *vm)
{

}

void into_command(vm_t *vm)
{

}

void iret_command(vm_t *vm)
{

}

void ja_command(vm_t *vm)
{

}

void jae_command(vm_t *vm)
{

}

void jb_command(vm_t *vm)
{

}

void jbe_command(vm_t *vm)
{

}

void jc_command(vm_t *vm)
{

}

void jcxz_command(vm_t *vm)
{

}

void je_command(vm_t *vm)
{

}

void jg_command(vm_t *vm)
{

}

void jge_command(vm_t *vm)
{

}

void jl_command(vm_t *vm)
{

}

void jle_command(vm_t *vm)
{

}

void jmp_command(vm_t *vm)
{
	vm->cpu->regs[PC] = pop_dword(vm);
}

void jna_command(vm_t *vm)
{

}

void jnae_command(vm_t *vm)
{

}

void jnb_command(vm_t *vm)
{

}

void jnbe_command(vm_t *vm)
{

}

void jnc_command(vm_t *vm)
{

}

void jne_command(vm_t *vm)
{

}

void jng_command(vm_t *vm)
{

}

void jnge_command(vm_t *vm)
{

}

void jnl_command(vm_t *vm)
{

}

void jnle_command(vm_t *vm)
{

}

void jno_command(vm_t *vm)
{

}

void jnp_command(vm_t *vm)
{

}

void jns_command(vm_t *vm)
{

}

void jnz_command(vm_t *vm)
{

}

void jo_command(vm_t *vm)
{

}

void jp_command(vm_t *vm)
{

}

void jpe_command(vm_t *vm)
{

}

void jpo_command(vm_t *vm)
{

}

void js_command(vm_t *vm)
{

}

void jz_command(vm_t *vm)
{

}

void lahf_command(vm_t *vm)
{

}

void lds_command(vm_t *vm)
{

}

void lea_command(vm_t *vm)
{

}

void les_command(vm_t *vm)
{

}

void lodsb_command(vm_t *vm)
{

}

void lodsw_command(vm_t *vm)
{

}

void loop_command(vm_t *vm)
{

}

void loope_command(vm_t *vm)
{

}

void loopne_command(vm_t *vm)
{

}

void loopnz_command(vm_t *vm)
{

}

void loopz_command(vm_t *vm)
{

}

void mov_command(vm_t *vm)
{
	cpu_t *cpu = vm->cpu;
	uint8_t operands = ++cpu->regs[PC];
}

void movsb_command(vm_t *vm)
{

}

void movsw_command(vm_t *vm)
{

}

void mul_command(vm_t *vm)
{

}

void neg_command(vm_t *vm)
{

}

void nop_command(vm_t *vm)
{
	printf("%04x: %s\n", vm->cpu->regs[PC] - 1, __func__);
}

void not_command(vm_t *vm)
{

}

void or_command(vm_t *vm)
{

}

void out_command(vm_t *vm)
{

}

void pop_command(vm_t *vm)
{
	vm->cpu->regs[AX] = pop_dword(vm);
}

void popa_command(vm_t *vm)
{

}

void popf_command(vm_t *vm)
{

}

void prt_command(vm_t *vm)
{
	int offset = pop_dword(vm);
	char *str = (char*)peek_ptr(vm, offset);
	printf("%s", str);
	vm->cpu->regs[PC]++;
}

void push_command(vm_t *vm)
{
	uint value = fetch_dword(vm);
	push_dword(vm, value);
	vm->cpu->regs[PC] += 3;
}

void pusha_command(vm_t *vm)
{

}

void pushf_command(vm_t *vm)
{

}

void rcl_command(vm_t *vm)
{

}

void rcr_command(vm_t *vm)
{

}

void rep_command(vm_t *vm)
{

}

void repe_command(vm_t *vm)
{

}

void repne_command(vm_t *vm)
{

}

void repnz_command(vm_t *vm)
{

}

void repz_command(vm_t *vm)
{

}

void ret_command(vm_t *vm)
{

}

void retf_command(vm_t *vm)
{

}

void rol_command(vm_t *vm)
{

}

void ror_command(vm_t *vm)
{

}

void sahf_command(vm_t *vm)
{

}

void sal_command(vm_t *vm)
{

}

void sar_command(vm_t *vm)
{

}

void sbb_command(vm_t *vm)
{

}

void scasb_command(vm_t *vm)
{

}

void scasw_command(vm_t *vm)
{

}

void shl_command(vm_t *vm)
{

}

void shr_command(vm_t *vm)
{

}

void stc_command(vm_t *vm)
{

}

void std_command(vm_t *vm)
{

}

void sti_command(vm_t *vm)
{

}

void stosb_command(vm_t *vm)
{

}

void stosw_command(vm_t *vm)
{

}

void sub_command(vm_t *vm)
{

}

void test_command(vm_t *vm)
{

}

void xchg_command(vm_t *vm)
{

}

void xlatb_command(vm_t *vm)
{

}

void xor_command(vm_t *vm)
{

}

