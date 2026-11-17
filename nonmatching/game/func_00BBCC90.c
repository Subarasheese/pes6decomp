/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001A5620(f32 *a);
extern void func_001A5550(f32 *a);
extern void func_001A5670(f32 a);
extern void func_001A55C0(f32 *a);
extern void func_001A54F0(f32 *a);
extern f32 func_001A5660(void);
extern char D_005E24B8[];
extern char D_005E24BC[];
extern char D_005E24C0[];
extern char D_005E24C4[];
extern char D_005E24C8[];
extern char D_005E24CC[];
extern char D_005E24D0[];
extern char D_005E24D4[];
extern char D_005E24D8[];

void func_00BBCC90(void) {
    f32 b[3];
    f32 c[3];
    f32 f20;
    s32 n;
    f32 f15;
    f32 f11;
    f32 r;

    n = (s32)(*(f32 *)D_005E24B8 - *(f32 *)D_005E24BC);
    if (n <= 0) {
        b[0] = *(f32 *)D_005E24C0;
        b[1] = *(f32 *)D_005E24C4;
        b[2] = *(f32 *)D_005E24C8;
        c[0] = *(f32 *)D_005E24CC;
        c[1] = *(f32 *)D_005E24D0;
        c[2] = *(f32 *)D_005E24D4;
        f20 = *(f32 *)D_005E24D8;
    } else {
        func_001A55C0(b);
        func_001A54F0(c);
        r = func_001A5660();
        f15 = (f32)(n - 1);
        f11 = (f32)n;
        *(f32 *)D_005E24BC = *(f32 *)D_005E24BC + 1.0f;
        b[0] = (*(f32 *)D_005E24C0 + b[0] * f15) / f11;
        b[1] = (*(f32 *)D_005E24C4 + b[1] * f15) / f11;
        b[2] = (*(f32 *)D_005E24C8 + b[2] * f15) / f11;
        c[0] = (*(f32 *)D_005E24CC + c[0] * f15) / f11;
        c[1] = (*(f32 *)D_005E24D0 + c[1] * f15) / f11;
        c[2] = (*(f32 *)D_005E24D4 + c[2] * f15) / f11;
        f20 = (*(f32 *)D_005E24D8 + r * f15) / f11;
    }
    func_001A5620(b);
    func_001A5550(c);
    func_001A5670(f20);
}
