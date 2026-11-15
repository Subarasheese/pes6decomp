/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 Pes6Random_State[];
void func_00151FC0(s32 i, s32 v) { if (v == 0) v = 1; Pes6Random_State[i] = v; }
