#include <include_asm.h>
#include <ultra64.h>


INCLUDE_ASM(void, "codeseg1/codeseg1_85", osCreateViManager, OSPri);

INCLUDE_ASM(s32, "codeseg1/codeseg1_85", viMgrMain);
