/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A14EC0(void *);                          /* extern */
M2C_UNK func_00A15300(void *, void *, u8, f32, f32, f32); /* extern */
M2C_UNK func_00A15540(void *, void *);              /* extern */
s32 func_00A4E850(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00A515A0(void *);                      /* extern */
M2C_UNK func_00AA9F90(void *, void *, s32, s32, s32, s32); /* extern */
extern void *Pes6Ball_Current;

s32 func_00A513C0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_f0;
    f32 var_f0_2;
    u16 temp_v1;
    u8 temp_s1;

    if (func_00A14EC0(arg0) != 0) {
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0xA0);
        func_00A515A0(arg0);
        return 0;
    }
    func_00AA9F90(arg0, arg0, arg1, arg2, arg3, -M2C_FIELD(arg0, s32 *, 0x90));
    var_f0 = 13465.0f;
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x68);
    temp_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    if (temp_f1 <= 13465.0f) {
        var_f0 = -13465.0f;
        if (temp_f1 < -13465.0f) {
            goto block_5;
        }
    } else {
block_5:
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = var_f0;
    }
    var_f0_2 = 8729.0f;
    temp_f1_2 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
    if (temp_f1_2 <= 8729.0f) {
        var_f0_2 = -8729.0f;
        if (temp_f1_2 < -8729.0f) {
            goto block_8;
        }
    } else {
block_8:
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = var_f0_2;
    }
    temp_f22 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    temp_s1 = M2C_FIELD(Pes6Ball_Current, u8 *, 0x68);
    temp_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458);
    temp_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
    if (func_00A4E850(arg0, 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = 0x7FFF;
    }
    func_00A15540(arg0, arg0);
    func_00A15300(arg0, arg0, temp_s1, temp_f22, temp_f20, temp_f21);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x7C) = (s32) temp_f20;
    func_00A515A0(arg0);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x3A);
    if ((temp_v1 != 3) && (temp_v1 != 0)) {
        M2C_FIELD(arg0, s8 *, 0x3E) = 0;
    }
    return 1;
}
