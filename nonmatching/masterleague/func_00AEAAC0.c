/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_00AE6B90(u8);                          /* extern */

void func_00AEAAC0(s32 arg0) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u32 temp_v0;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        var_a0 = M2C_FIELD(temp_v0, s32 *, 0x3DBC);
        var_v1 = M2C_FIELD(((var_a0 * 0x314) + temp_v0), u8 *, 0x1118) - 0xB;
        var_a2 = 0;
        if (var_v1 < 0) {
            var_v1 = 0;
        }
        if (arg0 < 0) {
            var_a0 = (s32) M2C_FIELD(temp_v0, u8 *, 0xF6C);
            if (var_a0 <= 0) {
                M2C_FIELD(temp_v0, u8 *, 0xF6C) = 0U;
            } else {
                var_a2 = -arg0;
                var_v1 = var_a0 + (arg0 & 0xFF);
                goto block_11;
            }
        } else if (arg0 > 0) {
            var_a0 = (s32) M2C_FIELD(temp_v0, u8 *, 0xF6C);
            if (var_a0 < var_v1) {
                var_a2 = -arg0;
                var_v1 = var_a0 + (arg0 & 0xFF);
            }
block_11:
            M2C_FIELD(temp_v0, u8 *, 0xF6C) = (u8) var_v1;
        }
        if (var_a2 != 0) {
            var_a0 = -9;
            M2C_FIELD(temp_v0, s16 *, 0xF72) = (s16) M2C_FIELD(temp_v0, s16 *, 0xF6E);
            M2C_FIELD(temp_v0, s16 *, 0xF70) = -9;
            M2C_FIELD(temp_v0, s32 *, 0xF7C) = var_a2;
            M2C_FIELD(temp_v0, s8 *, 0x3DB5) = 6;
        }
        func_00AE6B90((u8) var_a0);
    }
}
