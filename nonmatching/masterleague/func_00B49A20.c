/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B49760(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
extern s32 func_002260F0(s32);
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

void func_00B49A20(void) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    u32 temp_v0;

    temp_v0 = func_00B49760();
    if (temp_v0 != 0) {
        temp_s0 = M2C_FIELD(func_002260F0((s32) M2C_FIELD(temp_v0, u8 *, 0xE)), s32 *, 0x34);
        var_s3 = 0;
        var_s2 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x12) > 0) {
            do {
                func_002243B0((s32) M2C_FIELD(temp_v0, u8 *, 0xE), var_s2 & 0xFF);
                var_s2 += 1;
                var_s3 += M2C_FIELD(func_00223C10(), u16 *, 2);
            } while (var_s2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x12));
        }
        if (temp_s0 >= 0xF423F) {
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0xF423F;
        }
        M2C_FIELD(temp_v0, s32 *, 0x14) = var_s3;
        var_s2_2 = temp_s0 + var_s3;
        M2C_FIELD(temp_v0, s32 *, 0x18) = temp_s0;
        if (var_s2_2 >= 0xF423F) {
            var_s2_2 = 0xF423F;
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 4), 2, var_s3);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 8), 4, var_s2_2);
    }
}
