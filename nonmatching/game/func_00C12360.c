/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB3330[];
extern char D_00CB3370[];
extern char D_00CB3390[];
extern char D_00CB33D0[];

typedef s32 (*MakeFn)(s32, s32, s32, s32);
typedef f32 (*GetFn)(s32, s32, s32);
typedef void (*SetFn)(s32, s32, s32, f32);
typedef s32 (*FreeFn)(s32);

s32 func_00C12360(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    f32 f2 = (f32)arg3;
    f32 f0 = 1.0f + f2;
    f32 w2 = f2 / f0;
    f32 w1 = 1.0f / f0;
    GetFn get1 = ((GetFn *)D_00CB3390)[arg1];
    GetFn get2 = ((GetFn *)D_00CB3390)[arg2];
    SetFn set = ((SetFn *)D_00CB3370)[arg2];
    s32 a, b;
    s32 i, j;

    a = ((MakeFn *)D_00CB3330)[arg1](arg0, arg4 & 0xFF, arg5 & 0xFF, arg3 & 0xFF);
    b = ((MakeFn *)D_00CB3330)[arg2](arg0, arg4 & 0xFF, arg5 & 0xFF, arg3 & 0xFF);
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 6; j++) {
            f32 x = get1(a, i, j);
            f32 y = get2(b, i, j);
            f32 r = w1 * x + w2 * y;
            f32 v;
            if (0.0f < r && r < 1.0f) {
                v = 1.0f;
            } else {
                v = (f32)(s32)(0.5f + r);
            }
            set(b, i, j, v);
        }
    }
    return ((FreeFn *)D_00CB33D0)[arg1](a);
}
