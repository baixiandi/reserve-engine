#include "base.h"

bool initEngine(){
	uc_engine *uc;
	uc_err err;
	//err = uc_open(UC_ARCH_X86, UC_MODE_32, &uc);
	if(err){
		return false;
	}
	//uc_mem_map(uc, ADDRESS, 2 * 1024 * 1024, UC_PROT_ALL);
	return true;
}