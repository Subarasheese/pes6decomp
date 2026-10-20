/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 *D_003992B0[];
s32 func_001CE6A0(u32 v) { s32 *p = D_003992B0[((s32)v >> 24) & 0xFF]; return p[((s32)v >> 16) & 0xFF]; }
