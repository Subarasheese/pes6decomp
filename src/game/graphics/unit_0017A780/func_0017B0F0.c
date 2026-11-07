/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 D_00510FF0[];
void func_0017B0F0(u8 *p, s32 i) { p[1] = 1; p[2] = (u8)i; *(s32 *)(p + 0x130) = *(s32 *)&D_00510FF0[i]; D_00510FF0[i] = (s32)p; }
