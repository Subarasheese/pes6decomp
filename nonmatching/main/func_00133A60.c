/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00375C90[];
extern f32 func_00134110(void *, s32, f32);

s32 func_00133A60(u8 *a0, s32 a1) {
    f32 (*fn)(void *, s32, f32);
    u8 *p;
    s32 n, cnt, i, idx;
    fn = 0;
    if (a0 == 0) return 1;
    if (a0[4] == 0) return 1;
    p = *(u8 **)a0;
    if (p == 0) return 1;
    n = *(u16 *)(p + 6);
    if (a0[7] != 0) a0[7] = 0;
    else *(s32 *)(a0 + 8) = *(s32 *)(a0 + 8) + 1;
    if (*(s32 *)(a0 + 8) >= n) *(s32 *)(a0 + 8) = n - 1;
    if (*(s32 *)(a0 + 8) < 0) *(s32 *)(a0 + 8) = 0;
    idx = *(s32 *)(a0 + 8);
    if (p[4] < 5) fn = ((f32 (**)(void *, s32, f32))D_00375C90)[p[4]];
    if (fn == 0) fn = func_00134110;
    cnt = p[5];
    for (i = 0; i < cnt; i++) {
        u8 *q = *(u8 **)a0;
        ((f32 *)*(u8 **)(a0 + 0xC))[i] =
            fn(q + *(u16 *)(q + i * 2 + 8), idx, ((f32 *)*(u8 **)(a0 + 0xC))[i]);
    }
    if (*(s32 *)(a0 + 8) < n - 1) return 0;
    if (a1 != 0) {
        *(s32 *)(a0 + 8) = 0;
        a0[7] = 1;
        return 0;
    }
    return 1;
}
