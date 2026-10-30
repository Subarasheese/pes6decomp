/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
extern void func_002F4CE0(void *, s8);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B5C9D0(u8);                          /* extern */

void func_00B5C2D0(s64 arg0) {
    s16 temp_a0_2;
    s16 temp_a0_4;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s32 var_a2;
    s64 var_v0;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_3;
    u8 temp_a1;
    u8 temp_v1;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x62B);
        switch (temp_v1) {                          /* irregular */
        case 0:
            temp_v1_2 = M2C_FIELD(temp_v0, s16 *, 0x630);
            if (temp_v1_2 > 0) {
                if ((s32) M2C_FIELD(temp_v0, u8 *, 0x632) >= temp_v1_2) {
                    M2C_FIELD(temp_v0, u8 *, 0x632) = (u8) (temp_v1_2 - 1);
                }
                var_a2 = 0;
                var_v0 = 0;
                temp_a1 = (M2C_FIELD(temp_v0, s16 *, 0x630) - 1) & 0xFF;
                if (arg0 < 0) {
                    temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x632);
                    if ((s32) temp_a0 <= 0) {
                        M2C_FIELD(temp_v0, u8 *, 0x632) = 0U;
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x632) = (u8) (temp_a0 + (arg0 & 0xFF));
                        temp_a0_2 = M2C_FIELD(temp_v0, s16 *, 0x634);
                        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x632) < temp_a0_2) {
                            var_v0 = -arg0;
                            M2C_FIELD(temp_v0, s16 *, 0x634) = (s16) (temp_a0_2 + ((s64) (arg0 << 0x30) >> 0x30));
                            var_a2 = 1;
                        } else {
                            goto block_19;
                        }
                    }
                } else if (arg0 > 0) {
                    temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 0x632);
                    if ((s32) temp_a0_3 >= (temp_a1 & 0xFF)) {
                        M2C_FIELD(temp_v0, u8 *, 0x632) = temp_a1;
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x632) = (u8) (temp_a0_3 + (arg0 & 0xFF));
                        temp_a0_4 = M2C_FIELD(temp_v0, s16 *, 0x634);
                        if ((temp_a0_4 + 4) < (s32) M2C_FIELD(temp_v0, u8 *, 0x632)) {
                            var_v0 = -arg0;
                            M2C_FIELD(temp_v0, s16 *, 0x634) = (s16) (temp_a0_4 + ((s64) (arg0 << 0x30) >> 0x30));
                        }
block_19:
                        var_a2 = 1;
                    }
                }
                if (var_v0 == 0) {
                    if ((var_a2 & 0xFF) == 1) {
                        M2C_FIELD(temp_v0, s8 *, 0x62A) = 1;
                    }
                } else {
                    M2C_FIELD(temp_v0, s16 *, 0x63C) = (s16) M2C_FIELD(temp_v0, s16 *, 0x636);
                    M2C_FIELD(temp_v0, s16 *, 0x63E) = -8;
                    M2C_FIELD(temp_v0, s32 *, 0x638) = (s32) var_v0;
                    M2C_FIELD(temp_v0, s8 *, 0x62A) = 2;
                }
            default:
block_32:
                func_00B5C9D0(M2C_FIELD(temp_v0, u8 *, 0x632));
            }
            break;
        case 1:
            temp_v0_2 = M2C_FIELD(temp_v0, s16 *, 0x628) + ((s64) (arg0 << 0x30) >> 0x30);
            M2C_FIELD(temp_v0, s16 *, 0x628) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) < 0) {
                M2C_FIELD(temp_v0, s16 *, 0x628) = 1;
            }
            if (M2C_FIELD(temp_v0, s16 *, 0x628) >= 2) {
                M2C_FIELD(temp_v0, s16 *, 0x628) = 0;
            }
            func_0026E840(0x8400F802);
            func_002F4CE0(M2C_FIELD(temp_v0, void **, 0x624), (s8) M2C_FIELD(temp_v0, s16 *, 0x628));
            goto block_32;
        }
    }
}
