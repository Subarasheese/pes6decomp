/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
s32 *func_00223E00();                               /* extern */

void func_00AFEFE0(s16 arg0, s8 arg1, s32 arg2) {
    s16 temp_s1;
    s32 *temp_s0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0_2;
    s64 var_a0;
    s64 var_a1;
    s64 var_s2;
    void *temp_a0;
    void *temp_s4;
    void *var_s3;
    void *var_v1;

    temp_s0 = func_00223E00();
    temp_s4 = func_00228A80();
    if ((temp_s0 != NULL) && (temp_s4 != NULL)) {
        temp_a3 = *temp_s0;
        var_a0 = 0x13;
        var_a1 = 0;
        var_v1 = temp_s4;
        temp_a2 = (temp_a3 & 0xFFE003FF) | (((((u64) ((s64) temp_a3 << 0x2B) >> 0x35) + (arg2 & 0xFF)) & 0x7FF) << 0xA);
        *temp_s0 = temp_a2;
        temp_s1 = ((u64) ((s64) temp_a2 << 0x2B) >> 0x35) & 0xFFFF;
loop_3:
        if (((arg0 & 0xFFFF) == M2C_FIELD(var_v1, u16 *, 0x1053A)) && (M2C_FIELD((var_v1 + 0x1053A), u8 *, 5) == 0)) {
            var_a0 = var_a1 & 0xFF;
        } else {
            var_a1 = (s64) ((var_a1 + 1) << 0x38) >> 0x38;
            var_v1 += 8;
            if (var_a1 >= 0x14) {

            } else {
                goto loop_3;
            }
        }
        temp_s0_2 = temp_s1 & 0xFFFF;
        if (((s32) M2C_FIELD(temp_s4, u16 *, 0x105D4) < temp_s0_2) && (var_s2 = (s64) (var_a0 << 0x38) >> 0x38, (var_s2 >= 0))) {
            var_s3 = temp_s4 + (var_s2 * 8);
loop_11:
            temp_a0 = var_s3 + 0x1053A;
            if ((var_s2 != 0) && ((s32) M2C_FIELD(var_s3, u16 *, 0x10534) < temp_s0_2)) {
                func_001C4730(temp_a0, temp_s4 + ((var_s2 - 1) * 8) + 0x1053A, 8);
                var_s2 = (s64) ((var_s2 - 1) << 0x38) >> 0x38;
                var_s3 -= 8;
                if (var_s2 < 0) {

                } else {
                    goto loop_11;
                }
            } else {
                M2C_FIELD(var_s3, s16 *, 0x1053A) = arg0;
                M2C_FIELD(temp_a0, s8 *, 6) = arg1;
                M2C_FIELD(temp_a0, s16 *, 2) = temp_s1;
                M2C_FIELD(temp_a0, s8 *, 4) = 0;
                M2C_FIELD(temp_a0, s8 *, 5) = 0;
            }
        }
    }
}
