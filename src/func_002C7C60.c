/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_005E3611[];
void func_002C7C60(s32 i, u32 v) { u8 *p = D_005E3611 + i * 240; p[0] &= ~(u8)v; }
