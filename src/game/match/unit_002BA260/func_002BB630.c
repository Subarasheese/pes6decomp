/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_005E2F7C[];

s32 func_002BB630(void *p) { s32 v = *(s32 *)((u8 *)p + 4); u8 *d = D_005E2F7C; *(s32 *)(d + *(s32 *)0x005E2F78 * 4) = v; return 1; }
