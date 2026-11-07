/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern f32 func_00140F40(s32, f32 *, s32);
extern void func_001D4C20(s32, s32, f32 *);

void func_001D2F90(s32 n, f32 **a1, s32 a2, f32 *a3) {
    f32 v[4];
    s32 i;
    s32 s = a2;
    f32 *k = a3;
    v[3] = 1.0f;
    for (i = 0; i < n; i++) {
        f32 *p = *a1;
        v[0] = p[0];
        v[1] = p[1];
        v[2] = p[2];
        *a3 = func_00140F40(a2, v, 1);
        a2 += 0x10;
        a3 += 1;
        a1 += 1;
    }
    func_001D4C20(n, s, k);
}
