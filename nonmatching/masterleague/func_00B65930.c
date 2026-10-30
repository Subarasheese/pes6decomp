/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B64F60(void);
void func_00B65930(s64 arg0) {
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a1_2;
    s16 temp_a1_4;
    s32 temp_a0;
    s32 var_a2;
    s64 var_v1;
    u32 temp_v0;
    u8 temp_a1;
    u8 temp_a1_3;
    u8 temp_a1_5;

    temp_v0 = func_00B64F60();
    if ((temp_v0 != 0) && (temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x69C), (temp_a1 == 0)) && ((temp_a0 = M2C_FIELD(temp_v0, s32 *, 0), (temp_a0 == 2)) || (temp_a0 == 1) || (temp_a0 == 0))) {
        var_a2 = 0;
        var_v1 = 0;
        if (temp_a1 != 0) {
            return;
        }
        if (arg0 < 0) {
            temp_a1_2 = M2C_FIELD(temp_v0, s16 *, 0x430);
            if (temp_a1_2 <= 0) {
                M2C_FIELD(temp_v0, s16 *, 0x430) = 0;
            } else {
                temp_a0_2 = temp_a1_2 + ((s64) (arg0 << 0x30) >> 0x30);
                M2C_FIELD(temp_v0, s16 *, 0x430) = temp_a0_2;
                temp_a1_3 = M2C_FIELD(temp_v0, u8 *, 0x440);
                if (((s64) ((s64) temp_a0_2 << 0x30) >> 0x30) < (s32) temp_a1_3) {
                    var_v1 = -arg0;
                    M2C_FIELD(temp_v0, u8 *, 0x440) = (u8) (temp_a1_3 + (arg0 & 0xFF));
                    var_a2 = 1;
                } else {
                    goto block_19;
                }
            }
        } else if (arg0 > 0) {
            temp_a1_4 = M2C_FIELD(temp_v0, s16 *, 0x430);
            temp_a0_3 = (M2C_FIELD(temp_v0, s32 *, 0x5C4) - 1) & 0xFF & 0xFF;
            if (temp_a1_4 >= temp_a0_3) {
                M2C_FIELD(temp_v0, s16 *, 0x430) = temp_a0_3;
            } else {
                temp_a0_4 = temp_a1_4 + ((s64) (arg0 << 0x30) >> 0x30);
                M2C_FIELD(temp_v0, s16 *, 0x430) = temp_a0_4;
                temp_a1_5 = M2C_FIELD(temp_v0, u8 *, 0x440);
                if ((temp_a1_5 + 0xA) < ((s64) ((s64) temp_a0_4 << 0x30) >> 0x30)) {
                    var_v1 = -arg0;
                    M2C_FIELD(temp_v0, u8 *, 0x440) = (u8) (temp_a1_5 + (arg0 & 0xFF));
                }
block_19:
                var_a2 = 1;
            }
        }
        if (var_v1 == 0) {
            if ((var_a2 & 0xFF) == 1) {
                M2C_FIELD(temp_v0, u8 *, 0x69C) = 3U;
            }
        } else {
            M2C_FIELD(temp_v0, s16 *, 0x446) = (s16) M2C_FIELD(temp_v0, s16 *, 0x442);
            M2C_FIELD(temp_v0, s16 *, 0x444) = -9;
            M2C_FIELD(temp_v0, s32 *, 0x450) = (s32) var_v1;
            M2C_FIELD(temp_v0, u8 *, 0x69C) = 2U;
        }
    }
}
