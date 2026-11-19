/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern char D_00C9F190[];
typedef s32 (*Handler)(void *, void *, s32, s32, s32);
s32 func_00C06BF0(void *a0, void *a1, s32 a2, s32 a3, s32 a4) {
    s32 idx = *(s32 *)((u8 *)a1 + 0x24) % 14;
    Handler fn = ((Handler *)D_00C9F190)[idx];
    return fn(a0, a1, a2, a3, a4);
}
