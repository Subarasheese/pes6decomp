/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9CD0;
f32 func_0011D468(f32);

void func_002941E0(char *obj, char *a1, char *a2) {
    u32 x;
    f32 r, ang, t;

    if (*(u8 *)a2 == 2) {
        *(u8 *)(obj + 12) = 0;
    } else if (*(s16 *)(a2 + 4) == 4) {
        x = D_003E9CD0;
        x = (x ^ (x << 5)) & 0xFF;
        x = (x ^ ((s32)x >> 3)) & 0xFF;
        x = x ^ (x << 5);
        D_003E9CD0 = x;
        r = (f32)(s32)((x & 0xFF) - 1) / 254.0f;
        t = 1000.0f * (18.0f * r);
        t = t / (f32)(u32)*(u16 *)(obj + 10);
        *(u8 *)(obj + 12) = (u32)(3.0f + t);
    } else {
        x = D_003E9CD0;
        x = (x ^ (x << 5)) & 0xFF;
        x = (x ^ ((s32)x >> 3)) & 0xFF;
        x = x ^ (x << 5);
        D_003E9CD0 = x;
        r = (f32)(s32)((x & 0xFF) - 1) / 254.0f;
        t = 1000.0f * (18.0f * r);
        t = t / (f32)(u32)*(u16 *)(obj + 10);
        *(u8 *)(obj + 12) = (u32)t;
    }

    x = D_003E9CD0;
    x = (x ^ (x << 5)) & 0xFF;
    x = (x ^ ((s32)x >> 3)) & 0xFF;
    x = x ^ (x << 5);
    D_003E9CD0 = x;
    r = (f32)(s32)((x & 0xFF) - 1) / 254.0f;
    ang = 6.2831855f * r;

    if (*(s16 *)(a2 + 4) == 3) {
        x = D_003E9CD0;
        x = (x ^ (x << 5)) & 0xFF;
        x = (x ^ ((s32)x >> 3)) & 0xFF;
        x = x ^ (x << 5);
        D_003E9CD0 = x;
        ang = (f32)(s32)((x & 0xFF) - 1) / 254.0f;
    }

    if (*(s16 *)(a2 + 4) == 2) {
        u32 k = *(u8 *)(a1 + 2);
        x = D_003E9CD0;
        x = (x ^ (x << 5)) & 0xFF;
        x = (x ^ ((s32)x >> 3)) & 0xFF;
        x = x ^ (x << 5);
        D_003E9CD0 = x;
        r = (f32)(s32)((x & 0xFF) - 1) / 254.0f;
        if ((s32)k >= 4 && (s32)k < 10) {
            ang = 0.7f * r;
        } else {
            ang = (0.0f + 3.1415927f) + 0.7f * r;
        }
    }

    *(f32 *)(obj + 16) = func_0011D468(ang);
    *(f32 *)(obj + 20) = func_0011D468(1.5707964f + ang);
}
