/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00AB3390();                            /* extern */
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char D_005926E4[];
extern char D_005926FC[];

s32 func_00A07D20(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 var_f0;
    f32 var_f12;
    f32 var_f12_2;
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_v0;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_3;

    if (((u32) M2C_FIELD(arg1, u32 *, 0x114) < 0x200U) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) >= 0x121U)) {
        return 0;
    }
    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x400) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x21) {
            return 0;
        }
        goto block_6;
    }
block_6:
    if ((s32) (*(u8 *)D_005926FC) >= 0) {
        var_f0 = (f32) (*(u8 *)D_005926FC);
    } else {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
    }
    if (!((*(f32 *)D_005926D8) <= var_f0)) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x11) {
            return 0;
        }
        if (arg2 >= arg3) {
            temp_s2 = Pes6Ball_Current;
            temp_s3 = (*(u8 *)D_005926E4) * 4;
            temp_v0 = temp_s3 + temp_s2;
            temp_v0_2 = func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0, f32 *, 0xB7C));
            if (temp_v0_2 < 0) {
                var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
            } else {
                var_f12 = (f32) temp_v0_2;
            }
            temp_v1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
            temp_a0 = (s32) func_001CD9E0(var_f12);
            var_v0 = temp_v1 >> 7;
            if (temp_v1 < 0) {
                var_v0 = (s32) (temp_v1 + 0x7F) >> 7;
            }
            temp_v0_3 = temp_s3 + temp_s2;
            temp_v0_4 = func_009B33A0(arg1, (s32) M2C_FIELD(temp_v0_3, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0_3, f32 *, 0xB7C));
            if (temp_v0_4 < 0) {
                var_f12_2 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
            } else {
                var_f12_2 = (f32) temp_v0_4;
            }
            if ((var_v0 + temp_a0) >= (s32) func_001CD9E0(var_f12_2)) {
                return 0;
            }
            goto block_33;
        }
block_33:
        (*(f32 *)D_005926D8) = 104.0f;
        func_00AB3390();
        return 1;
    }
    return 0;
}
