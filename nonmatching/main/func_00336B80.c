/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00333600(s32);
extern s32 func_003109B0(void);
extern void func_0030EE80(f32 *);
extern f32 func_0030EBB0(s32, s32, f32);
extern s32 func_00341910(s32, s32, s32);

s32 func_00336B80(u8 *a0, s32 *a1, s32 *a2, u8 *a3) {
    f32 v[4];
    s32 t, r, c;
    f32 a, x;
    if (func_00333600(3) != 0) t = func_003109B0(); else t = a3[0x78];
    func_0030EE80(v);
    v[1] = v[1] * -1.0f;
    x = func_0030EBB0(t & 0xff, 1, v[2]);
    v[2] = x;
    a = (x<0.0f?-x:x);
    if (a < 963.0f) {
        r = 1;
    } else if (func_00341910(1, 5, 10) != 0) {
        r = (v[2] < 0.0f) ? 4 : 3;
    } else if (v[1] < 648.0f) {
        r = (v[2] < 0.0f) ? 4 : 3;
    } else r = 0;
    if (!(a <= *(f32 *)(a0 + 0x4c))) c = 4;
    else if (!(a <= *(f32 *)(a0 + 0x50))) c = 3;
    else if (!(v[1] <= *(f32 *)(a0 + 0x54))) c = 4;
    else if (v[1] <= *(f32 *)(a0 + 0x58)) c = 2;
    else c = 3;
    *a2 = r;
    *a1 = c;
    return 1;
}
