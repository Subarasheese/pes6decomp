/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00103C20(void *, M2C_UNK *);               /* extern */
M2C_UNK func_00103C48(void *, void *);              /* extern */
M2C_UNK func_00103E38(void *, M2C_UNK *);           /* extern */
f32 func_0011D210(f32);                             /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00375C70[];
extern char D_003767E0[];
extern char D_003FB790[];

void func_00133250(s32 arg0, void *arg1, M2C_UNK *arg2) {
    f32 temp_f0;
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = ((void *)D_003FB790) + (arg0 * 0xB0);
    func_001C48E8(temp_s0, 0, 0xB0);
    M2C_FIELD(temp_s0, s32 *, 0) = 4;
    if ((M2C_FIELD(arg1, f32 *, 0) == 0.0f) && (M2C_FIELD(arg1, f32 *, 4) == 0.0f) && (M2C_FIELD(arg1, f32 *, 8) == 0.0f)) {
        func_00103E38(temp_s0 + 0x40, ((void *)D_003767E0));
    } else {
        func_00103C48(temp_s0 + 0x40, arg1);
        M2C_FIELD(temp_s0, s32 *, 0x4C) = 0;
    }
    func_00103E38(temp_s0 + 0x60, arg2);
    temp_f0 = func_00103C20(temp_s0 + 0x60, ((void *)D_00375C70));
    M2C_FIELD(temp_s0, f32 *, 0xC) = temp_f0;
    M2C_FIELD(temp_s0, f32 *, 4) = func_0011D210(temp_f0);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
    switch (temp_a0) {                              /* irregular */
    default:
        M2C_FIELD(temp_s0, f32 *, 0x1C) = 0.0f;
        return;
    case 2:
    case 1:
        M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0, f32 *, 4);
        break;
    case 6:
    case 5:
        return;
    }
}
