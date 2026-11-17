/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005A2491[];
extern char D_005A2492[];
extern char D_005A2493[];
extern char D_005A2494[];
extern char D_005A2498[];
extern u8 D_003E9CD0;
extern f32 func_0011D468(f32 x);

void func_00294720(u8 *out, u8 *p) {
    s32 m;
    f32 f24, f23, f22, f21, f20, r, t;
    u32 v, a;

    m = (s8)(*(s8 *)(p + 2) - 2);
    if (m <= 0) {
        m = (s8)(m + 12);
    }
    f24 = (f32)*(u32 *)D_005A2494;
    f23 = (f32)*(s8 *)D_005A2492;
    f22 = (f32)*(s8 *)D_005A2491;
    if (p[1] == 3 || p[1] == 0) {
        f21 = 6.2831855f;
        f20 = 1.5707964f;
        if (*(s8 *)D_005A2493 > 0 || p[5] == 0) {
            f24 = f24 + f23 * func_0011D468(f20 + (f21 * (f32)m) / 12.0f);
        } else {
            f24 = f24 + f23 * func_0011D468((f21 * (f32)m) / 12.0f - f20);
        }
        a = D_003E9CD0;
        v = a ^ (a << 5);
        a = v & 0xFF;
        v = a ^ ((s32)a >> 3);
        a = v & 0xFF;
        v = a ^ (a << 5);
        D_003E9CD0 = v;
        r = 1.0f + 0.1f * ((f32)(s32)((v & 0xFF) - 1) / 254.0f);
        t = func_0011D468((f21 * *(f32 *)D_005A2498) / 24.0f - f20);
        f24 = f24 * r;
        a = D_003E9CD0;
        v = a ^ (a << 5);
        a = v & 0xFF;
        v = a ^ ((s32)a >> 3);
        a = v & 0xFF;
        v = a ^ (a << 5);
        D_003E9CD0 = v;
        f24 = (f24 + f22 * t) + 3.0f * ((f32)(s32)((v & 0xFF) - 1) / 254.0f);
    } else if ((u32)(p[1] - 1) < 2) {
        a = D_003E9CD0;
        v = a ^ (a << 5);
        a = v & 0xFF;
        v = a ^ ((s32)a >> 3);
        a = v & 0xFF;
        v = a ^ (a << 5);
        D_003E9CD0 = v;
        f24 = 75.0f + 18.0f * ((f32)(s32)((v & 0xFF) - 1) / 254.0f);
    }
    *(f32 *)(out + 4) = f24;
}
