/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00103C20(void *, M2C_UNK *);               /* extern */
M2C_UNK func_00103C48(void *, f32 *);               /* extern */
M2C_UNK func_00103E38(void *, f32 *);               /* extern */
f32 func_0011D210(f32);                             /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00375C70[];
extern char D_003767E0[];
extern char D_003767E4[];
extern char D_003767E8[];
extern char D_003FB790[];

void func_00133390(s32 arg0, f32 *arg1, f32 *arg2, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = ((void *)D_003FB790) + (arg0 * 0xB0);
    func_001C48E8(temp_s0, 0, 0xB0);
    M2C_FIELD(temp_s0, s32 *, 0) = 2;
    func_00103E38(temp_s0 + 0x20, arg1);
    if (((*(f32 *)D_003767E0) == 0.0f) && ((*(f32 *)D_003767E4) == 0.0f) && ((*(f32 *)D_003767E8) == 0.0f)) {
        func_00103E38(temp_s0 + 0x40, ((void *)D_003767E0));
    } else {
        func_00103C48(temp_s0 + 0x40, ((void *)D_003767E0));
        M2C_FIELD(temp_s0, s32 *, 0x4C) = 0;
    }
    func_00103E38(temp_s0 + 0x60, arg2);
    temp_f0 = func_00103C20(temp_s0 + 0x60, ((void *)D_00375C70));
    M2C_FIELD(temp_s0, f32 *, 0xC) = temp_f0;
    M2C_FIELD(temp_s0, f32 *, 4) = func_0011D210(temp_f0);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
    switch (temp_a0) {                              /* irregular */
    case 6:
    case 5:
        break;
    default:
        M2C_FIELD(temp_s0, f32 *, 0x1C) = 0.0f;
        break;
    case 2:
    case 1:
        M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0, f32 *, 4);
        break;
    }
    M2C_FIELD(temp_s0, f32 *, 0x80) = fparg0;
    M2C_FIELD(temp_s0, f32 *, 0x84) = fparg1;
    temp_f1 = 1.0f / (M2C_FIELD(temp_s0, f32 *, 0x80) - fparg1);
    M2C_FIELD(temp_s0, f32 *, 0x90) = temp_f1;
    M2C_FIELD(temp_s0, f32 *, 0x94) = (f32) -(temp_f1 * fparg1);
    temp_f1_2 = M2C_FIELD(temp_s0, f32 *, 0x80);
    temp_f0_2 = temp_f1_2 / (temp_f1_2 - M2C_FIELD(temp_s0, f32 *, 0x84));
    M2C_FIELD(temp_s0, f32 *, 0xA4) = temp_f0_2;
    M2C_FIELD(temp_s0, f32 *, 0xA0) = (f32) (-temp_f0_2 * M2C_FIELD(temp_s0, f32 *, 0x84));
}
