/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void * func_001D5A10(s32);
extern u32 func_00B62380(void);
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
s32 func_00B61180(u8, u8);                          /* extern */
M2C_UNK func_00B62FD0(u8);                          /* extern */
M2C_UNK func_00B630E0(s32, s32, s16, s64);          /* extern */
M2C_UNK func_00B63500(s32);                         /* extern */
M2C_UNK func_00B63A40(s32);                         /* extern */
M2C_UNK func_00B63B60();                            /* extern */
M2C_UNK func_00B63D30();                            /* extern */

void func_00B644B0(void) {
    f32 var_f1;
    s16 temp_a2;
    s32 temp_s2;
    u32 temp_v0;
    u32 temp_v0_4;
    u8 temp_v0_6;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        temp_s2 = func_00B61180(M2C_FIELD(temp_v0, u8 *, 0x4C0), M2C_FIELD(temp_v0, u8 *, 0x4BE)) & 0xFF;
        temp_v0_2 = func_001D5A10(0x1033D);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_001D5A10(0x10327);
            M2C_FIELD(temp_v0, void **, 0xA0) = temp_v0_3;
            if (temp_v0_3 != NULL) {
                func_00B63D30();
                func_00B63B60();
                func_00B63A40(temp_s2);
                func_00B63500(temp_s2);
                if ((temp_s2 & 0xFF) < 0x48) {
                    temp_v0_4 = func_00B62380();
                    if (temp_v0_4 != 0) {
                        temp_v0_5 = (temp_s2 & 0xFF) + temp_v0_4;
                        if ((s32) M2C_FIELD(temp_v0_5, u8 *, 0x4C5) >= 3) {
                            func_001F3D10(M2C_FIELD(temp_v0_4, s32 *, 0x418), 1U);
                            temp_v0_6 = M2C_FIELD(temp_v0_5, u8 *, 0x4C5);
                            if ((s32) temp_v0_6 < 0) {
                                var_f1 = 2.0f * (f32) ((temp_v0_6 >> 1) | (temp_v0_6 & 1));
                            } else {
                                var_f1 = (f32) temp_v0_6;
                            }
                            func_0097F970(M2C_FIELD(temp_v0_4, s32 *, 0x418), 0, 2.0f / var_f1);
                        } else {
                            func_001F3D10(M2C_FIELD(temp_v0_4, s32 *, 0x418), 0U);
                        }
                    }
                }
                temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x556);
                func_00B630E0(temp_s2, -(s32) M2C_FIELD(((temp_s2 & 0xFF) + temp_v0), u8 *, 0x50D), temp_a2, (s64) ((s64) -temp_a2 << 0x30) >> 0x30);
                func_00B62FD0(M2C_FIELD(temp_v0, u8 *, 0x4BD));
            }
        }
    }
}
