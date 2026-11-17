/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005A2490[];
extern char D_005A2491[];
extern char D_005A2493[];
extern char D_005A2498[];
extern u8 D_003E9CD0;
f32 func_0011D468(f32 x);

void func_00294A40(f32 *out, char *a1, char *a2) {
    s8 n;
    f32 base, f22, f23, f20, f21, w, r;
    u8 v;

    n = (s8)(a1[2] - 2);
    if (n <= 0) n = (s8)(n + 12);
    base = (f32)*(s16 *)(a2 + 2) / 100.0f;
    f22 = (f32)*(s8 *)D_005A2491;
    f23 = (f32)*(s8 *)D_005A2490;
    f21 = 6.2831855f;
    f20 = 1.5707964f;
    if (*(s8 *)D_005A2493 > 0 || *(u8 *)(a1 + 5) == 0) {
        w = f21 * (f32)n / 12.0f;
        base = base + f23 * func_0011D468(w - f20);
    } else {
        w = f21 * (f32)n / 12.0f;
        base = base + f23 * func_0011D468(f20 + w);
    }
    w = f21 * *(f32 *)D_005A2498 / 24.0f;
    base = base + f22 * func_0011D468(w - f20);
    v = D_003E9CD0;
    v = v ^ (v << 5);
    v = v ^ (v >> 3);
    v = v ^ (v << 5);
    D_003E9CD0 = v;
    r = (f32)((s32)v - 1) / 254.0f;
    *out = base + 2.0f * r;
}
