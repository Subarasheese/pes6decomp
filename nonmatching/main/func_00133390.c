/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern f32 func_00103C20(void *, void *);
extern void func_00103C48(void *, void *);
extern void func_00103E38(void *, void *);
extern f32 func_0011D210(f32);
extern void func_001C48E8(void *, s32, s32);
extern char D_00375C70[];
extern char D_003767E0[];
extern char D_003767E4[];
extern char D_003767E8[];
extern char D_003FB790[];

void func_00133390(s32 arg0, void *arg1, void *arg2, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f1;
    char *s0;

    s0 = D_003FB790 + arg0 * 0xB0;
    func_001C48E8(s0, 0, 0xB0);
    *(s32 *)s0 = 2;
    func_00103E38(s0 + 0x20, arg1);
    if (*(f32 *)D_003767E0 == 0.0f && *(f32 *)D_003767E4 == 0.0f && *(f32 *)D_003767E8 == 0.0f) {
        func_00103E38(s0 + 0x40, D_003767E0);
    } else {
        func_00103C48(s0 + 0x40, D_003767E0);
        *(s32 *)(s0 + 0x4C) = 0;
    }
    func_00103E38(s0 + 0x60, arg2);
    temp_f0 = func_00103C20(s0 + 0x60, D_00375C70);
    *(f32 *)(s0 + 0xC) = temp_f0;
    *(f32 *)(s0 + 4) = func_0011D210(temp_f0);
    if (*(s32 *)s0 == 6 || *(s32 *)s0 == 5) {
    } else if (*(s32 *)s0 == 2 || *(s32 *)s0 == 1) {
        *(f32 *)(s0 + 0x1C) = *(f32 *)(s0 + 4);
    } else {
        *(s32 *)(s0 + 0x1C) = 0;
    }
    *(f32 *)(s0 + 0x80) = fparg0;
    *(f32 *)(s0 + 0x84) = fparg1;
    temp_f1 = 1.0f / (*(f32 *)(s0 + 0x80) - fparg1);
    *(f32 *)(s0 + 0x90) = temp_f1;
    *(f32 *)(s0 + 0x94) = -(temp_f1 * fparg1);
    temp_f1 = *(f32 *)(s0 + 0x80);
    temp_f0 = temp_f1 / (temp_f1 - *(f32 *)(s0 + 0x84));
    *(f32 *)(s0 + 0xA4) = temp_f0;
    *(f32 *)(s0 + 0xA0) = -temp_f0 * *(f32 *)(s0 + 0x84);
}
