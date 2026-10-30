/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_002249A0(s32, s32);                        /* extern */
s16 func_00224BC0(s32, s32, u8, void *, s32, s32, M2C_UNK); /* extern */
s32 func_0095CA00();                                /* extern */
M2C_UNK func_00B174B0(s32, s32, u8, void *, s32, s32, M2C_UNK); /* extern */
extern void *D_003EAD78;

void func_00B175A0(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    u8 temp_v0;
    void *temp_a3;
    void *temp_s0;

    var_s3 = -1;
    var_s2 = 0;
    temp_s0 = D_003EAD78;
    temp_s1 = func_00225820() & 0xFF;
    if (temp_s0 != NULL) {
        var_v1 = 0;
        temp_a5 = func_0095CA00() + (M2C_FIELD(temp_s0, u8 *, 0x2C) * 0x280);
        do {
            temp_a4 = var_v1 & 0xFF;
            temp_a3 = temp_a5 + (temp_a4 * 0x14);
            temp_v0 = M2C_FIELD(temp_a3, u8 *, 0x4C);
            temp_a1 = temp_v0 + M2C_FIELD(temp_a3, u8 *, 0x4D);
            temp_a0 = temp_a1 + M2C_FIELD(temp_a3, u8 *, 0x4E);
            temp_v0_2 = temp_a0 + M2C_FIELD(temp_a3, u8 *, 0x4F);
            if (var_s2 < temp_v0_2) {
                var_s2 = temp_v0_2;
                var_s3 = temp_a4;
            }
            var_v1 = (var_v1 + 1) & 0xFF;
        } while (var_v1 < 0x20);
        if (var_s3 != -1) {
            M2C_FIELD(temp_s0, s16 *, 0x64) = func_00224BC0(temp_s1, var_s3 & 0xFF, temp_v0, temp_a3, temp_a4, temp_a5, 0);
            M2C_FIELD(temp_s0, s8 *, 0x66) = (s8) ((func_002249A0(temp_s1, var_s3 & 0xFF) & 0xFF) + 1);
        } else {
            func_00B174B0(temp_a0, temp_a1, temp_v0, temp_a3, temp_a4, temp_a5, 0);
        }
    }
}
