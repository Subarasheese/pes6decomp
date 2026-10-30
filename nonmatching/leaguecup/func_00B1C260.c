/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
s32 func_00B1DB40(u8);                              /* extern */
s32 func_00B1DB90(s32, u8);                         /* extern */

void func_00B1C260(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_hi;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x9C);
        if (temp_a0 != 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xA4);
            if ((temp_v1 == 0x1E) && (temp_a0 > 0)) {
                var_v0 = -1;
                goto block_8;
            }
            if ((temp_v1 == 0) && (temp_a0 < 0)) {
                var_v0 = 0x1E;
block_8:
                M2C_FIELD(temp_v0, s32 *, 0xA4) = var_v0;
            }
            M2C_FIELD(temp_v0, s32 *, 0xA4) = (s32) (M2C_FIELD(temp_v0, s32 *, 0xA4) + M2C_FIELD(temp_v0, s32 *, 0x9C));
            var_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x98);
            if ((var_v0_2 < 0) && (var_v0_2 < 0)) {
                if ((((2 - var_v0_2) / 3) + ((u32) (2 - var_v0_2) >> 0x1F)) >= 9) {
                    var_a3 = 0;
                    var_a2 = 0;
                    var_a1 = 0;
                    var_v1 = 0;
                    if ((var_v0_2 <= 0) && (var_v0_2 < 0x7FFFFFFD)) {
                        var_v1 = 1;
                    }
                    if ((var_v1 != 0) && (M2C_FIELD(temp_v0, s32 *, 0x98) != 0x80000000)) {
                        var_a1 = 1;
                    }
                    if (var_a1 != 0) {
                        temp_v1_2 = -M2C_FIELD(temp_v0, s32 *, 0x98) & 0x80000000;
                        var_a1_2 = 1;
                        if ((temp_v1_2 == 0) && (temp_v1_2 != 0)) {
                            var_a1_2 = 0;
                        }
                        if (var_a1_2 != 0) {
                            var_a2 = 1;
                        }
                    }
                    if (var_a2 != 0) {
                        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x98);
                        var_a2_2 = 1;
                        if (!(-temp_a1 & 0x80000000) && ((2 - temp_a1) & 0x80000000)) {
                            var_a2_2 = 0;
                        }
                        if (var_a2_2 != 0) {
                            var_a3 = 1;
                        }
                    }
                    if (var_a3 != 0) {
                        do {
                            var_v0_2 += 0x18;
                        } while (var_v0_2 < -0x18);
                    }
                }
                if (var_v0_2 < 0) {
                    do {
                        var_v0_2 += 3;
                    } while (var_v0_2 < 0);
                }
            }
            temp_hi = var_v0_2 % 3;
            if (func_00B1DB90(temp_hi & 0xFF, (u8) M2C_FIELD(temp_v0, s32 *, 0xA4)) != 1) {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x14), 0);
            } else {
                M2C_FIELD(temp_v0, s32 *, 0x9C) = 0;
                M2C_FIELD(temp_v0, s32 *, 0x98) = temp_hi;
                func_001D7D80(M2C_FIELD(temp_v0, void **, 0x14), func_00B1DB40((u8) M2C_FIELD(temp_v0, s32 *, 0xA4)) & 0xFF);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x14), 1);
            }
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xC), (s16) M2C_FIELD(temp_v0, s32 *, 0xA4));
        }
    }
}
