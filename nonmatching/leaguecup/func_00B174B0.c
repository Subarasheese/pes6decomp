/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_002249A0(s32, s32);                        /* extern */
s16 func_00224BC0(s32, s32, s32);                   /* extern */
s32 func_0095CA00();                                /* extern */
extern void *D_003EAD78;

void func_00B174B0(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s1;
    s32 var_a2;
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    void *temp_s0;

    var_s3 = -1;
    var_s2 = 0;
    temp_s0 = D_003EAD78;
    temp_s1 = func_00225820() & 0xFF;
    if (temp_s0 != NULL) {
        var_a2 = 0;
        temp_a1 = func_0095CA00() + (M2C_FIELD(temp_s0, u8 *, 0x2C) * 0x280);
        do {
            temp_a0 = var_a2 & 0xFF;
            temp_v1 = M2C_FIELD((temp_a1 + (temp_a0 * 0x14)), u8 *, 0x5F);
            if ((var_s2 & 0xFF) < (s32) temp_v1) {
                var_s2 = temp_v1 & 0xFF;
                var_s3 = temp_a0;
            }
            var_a2 = (var_a2 + 1) & 0xFF;
        } while (var_a2 < 0x20);
        if (var_s3 == -1) {
            var_s3 = 9;
        }
        M2C_FIELD(temp_s0, s16 *, 0x64) = func_00224BC0(temp_s1, var_s3 & 0xFF, var_a2);
        M2C_FIELD(temp_s0, s8 *, 0x66) = (s8) ((func_002249A0(temp_s1, var_s3 & 0xFF) & 0xFF) + 1);
    }
}
