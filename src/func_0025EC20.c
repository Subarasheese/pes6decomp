/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_0058D214[]; s32 func_0025E100(s32, s32);
void func_0025EC20(s32 i) { u8 *p = D_0058D214 + i * 24; *p = 1; func_0025E100(0xA, 1); }
