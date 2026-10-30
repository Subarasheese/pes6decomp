/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00989410(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00973C70(void *, s32);                 /* extern */
M2C_UNK func_0097FA10(s32, u8, s16, f32);           /* extern */

void func_00987140(s32 arg0) {
    f32 var_f2;
    s16 temp_a2;
    s32 temp_s6;
    s32 var_s5;
    u32 temp_v0;
    u32 var_s2;
    u32 var_s3;
    u8 *temp_s0;
    u8 temp_a1;
    u8 temp_s7;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v0 = func_00989410();
    if (temp_v0 != 0) {
        temp_s6 = arg0 & 0xFF;
        temp_s7 = M2C_FIELD(temp_v0, u8 *, 0x472);
        var_s5 = 0;
        var_s3 = temp_v0;
        M2C_FIELD(temp_v0, s8 *, 0x466) = 0;
        var_s2 = temp_v0;
        M2C_FIELD(temp_v0, s8 *, 0x467) = 0;
        temp_s0 = temp_v0 + (temp_s6 * 4) + temp_s7 + 0x46A;
        do {
            func_00973C70(M2C_FIELD(var_s2, void **, 0xC), var_s3 + 0x258);
            temp_v1 = M2C_FIELD((temp_v0 + temp_s6), u8 *, 0x466);
            if (((var_s5 + 1) < (s32) temp_v1) || ((temp_v1 + 8) < var_s5) || (var_s5 >= (s32) *temp_s0)) {
                func_001D7D60(M2C_FIELD(var_s2, void **, 0xC), 0);
            } else {
                func_001D7D60(M2C_FIELD(var_s2, void **, 0xC), 1);
            }
            var_s5 += 1;
            var_s3 += 0x10;
            var_s2 += 4;
        } while (var_s5 < 0x10);
        temp_a1 = M2C_FIELD((temp_s6 + temp_v0), u8 *, 0x466);
        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x458);
        temp_v0_2 = M2C_FIELD(((temp_s7 & 0xFF) + ((temp_s6 * 4) + temp_v0)), u8 *, 0x46A);
        if ((s32) temp_v0_2 >= 0) {
            var_f2 = (f32) temp_v0_2;
        } else {
            var_f2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x250), temp_a1, temp_a2, (f32) ((temp_a1 * temp_a2) - M2C_FIELD(((temp_s6 * 2) + temp_v0), s16 *, 0x45E)) / ((var_f2 - 8.0f) * (f32) temp_a2));
    }
}
