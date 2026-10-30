/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
s16 func_0093DF40(s32);                             /* extern */
s32 func_0093DF50();                                /* extern */
s32 func_0093DF80();                                /* extern */
s32 func_0093DF90();                                /* extern */
s32 func_0093DFA0();                                /* extern */
s32 func_0093DFC0();                                /* extern */
s32 func_0093DFE0();                                /* extern */
s32 func_0093E000();                                /* extern */
s32 func_0093E020();                                /* extern */
s32 func_0093E040();                                /* extern */
s32 func_0093E060();                                /* extern */
s32 func_0093E080();                                /* extern */
s32 func_0093E090();                                /* extern */
s32 func_0093E0A0();                                /* extern */
s32 func_0093E0C0();                                /* extern */
s32 func_0093E0E0();                                /* extern */
s32 func_0093E100();                                /* extern */
s32 func_0093E120();                                /* extern */
s32 func_0093E130();                                /* extern */
s32 func_0093E160();                                /* extern */
s32 func_0093E170();                                /* extern */
s32 func_0093E1A0();                                /* extern */
s32 func_0093E1B0();                                /* extern */

void *func_009E22D0(void *arg0) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f2;
    f32 var_f3;
    s16 temp_v0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s0;
    void *temp_v1;

    func_001C48E8(0, 0x68);
    M2C_FIELD(arg0, s32 *, 0) = func_0093E1B0();
    M2C_FIELD(arg0, s32 *, 4) = func_0093E1A0();
    M2C_FIELD(arg0, s32 *, 8) = func_0093DF90();
    M2C_FIELD(arg0, s32 *, 0xC) = func_0093E130();
    M2C_FIELD(arg0, s32 *, 0x10) = func_0093E120();
    M2C_FIELD(arg0, s32 *, 0x14) = func_0093E100();
    M2C_FIELD(arg0, s32 *, 0x18) = func_0093E0E0();
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0093E0C0();
    M2C_FIELD(arg0, s32 *, 0x20) = func_0093E0A0();
    M2C_FIELD(arg0, s32 *, 0x24) = func_0093E020();
    M2C_FIELD(arg0, s32 *, 0x48) = func_0093E000();
    M2C_FIELD(arg0, s32 *, 0x4C) = func_0093DFE0();
    M2C_FIELD(arg0, s32 *, 0x50) = func_0093DFC0();
    M2C_FIELD(arg0, s32 *, 0x54) = func_0093DFA0();
    M2C_FIELD(arg0, s32 *, 0x30) = func_0093DF80();
    M2C_FIELD(arg0, s32 *, 0x34) = func_0093E160();
    M2C_FIELD(arg0, s32 *, 0x38) = func_0093E060();
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0093E040();
    M2C_FIELD(arg0, s32 *, 0x44) = func_0093E170();
    M2C_FIELD(arg0, s32 *, 0x58) = func_0093DF50();
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_s0 = func_0093E090();
    temp_v0 = func_0093E080();
    if (temp_s1 == 0) {
        var_f3 = 0.0f;
        var_f2 = 0.0f;
        var_f0 = 0.0f;
    } else {
        if (temp_s3 < 0) {
            var_f1 = 2.0f * (f32) (((u32) temp_s3 >> 1) | (temp_s3 & 1));
        } else {
            var_f1 = (f32) temp_s3;
        }
        if (temp_s1 < 0) {
            var_f0_2 = 2.0f * (f32) (((u32) temp_s1 >> 1) | (temp_s1 & 1));
        } else {
            var_f0_2 = (f32) temp_s1;
        }
        var_f3 = var_f1 / var_f0_2;
        if (temp_s0 >= 0) {
            var_f1_2 = (f32) temp_s0;
        } else {
            var_f1_2 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
        }
        if (temp_s1 < 0) {
            var_f0_3 = 2.0f * (f32) (((u32) temp_s1 >> 1) | (temp_s1 & 1));
        } else {
            var_f0_3 = (f32) temp_s1;
        }
        var_f2 = var_f1_2 / var_f0_3;
        if (temp_v0 >= 0) {
            var_f1_3 = (f32) temp_v0;
        } else {
            var_f1_3 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        if (temp_s1 < 0) {
            var_f0_4 = 2.0f * (f32) (((u32) temp_s1 >> 1) | (temp_s1 & 1));
        } else {
            var_f0_4 = (f32) temp_s1;
        }
        var_f0 = var_f1_3 / var_f0_4;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = var_f3;
    var_s0 = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = var_f2;
    M2C_FIELD(arg0, f32 *, 0x2C) = var_f0;
    do {
        temp_v0_2 = func_0093DF40(var_s0);
        temp_v1 = arg0 + (var_s0 * 2);
        var_s0 += 1;
        M2C_FIELD(temp_v1, s16 *, 0x5C) = temp_v0_2;
    } while (var_s0 < 5);
    return arg0;
}
