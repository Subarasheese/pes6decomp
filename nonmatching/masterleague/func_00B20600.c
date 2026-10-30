/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00994C60(s32, s32);                      /* extern */

void func_00B20600(void) {
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    u16 temp_a1;
    u64 temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    var_s6 = 0;
    do {
        var_s5 = 0;
loop_2:
        temp_v0 = func_00994C60(var_s6, var_s5);
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) != 0)) {
            temp_a1 = M2C_FIELD(temp_v0, u16 *, 0);
            temp_a0 = (u64) ((s64) temp_a1 << 0x35) >> 0x3C;
            switch (temp_a0) {                      /* irregular */
            case 4:
                M2C_FIELD(temp_v0, u16 *, 0) = (u16) ((temp_a1 & ~0x780) | 0x300);
                break;
            case 5:
                if (((u64) ((s64) (u8) M2C_FIELD(temp_v0, u16 *, 0) << 0x39) >> 0x3A) != 9) {
                    M2C_FIELD(temp_v0, u16 *, 0) = (u16) ((temp_a1 & ~0x780) | 0x300);
                } else {
                    var_s4 = 0;
                    var_s2 = 0;
loop_11:
                    var_s3 = 0;
loop_12:
                    temp_v0_2 = func_00994C60(var_s4, var_s3);
                    if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 4) != 0)) {
                        if ((((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x39) >> 0x3A) != 9) && (((u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x35) >> 0x3C) == 2) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 1) << 0x39) >> 0x3C) == 1)) {
                            var_s2 = 1 & 0xFF;
                        } else if ((var_s2 & 0xFF) != 1) {
                            goto block_20;
                        }
                    } else {
block_20:
                        var_s3 += 1;
                        if (var_s3 < 0x25) {
                            goto loop_12;
                        }
                    }
                    temp_a0_2 = var_s2 & 0xFF;
                    if (temp_a0_2 != 1) {
                        var_s4 += 1;
                        if (var_s4 < 0x48) {
                            goto loop_11;
                        }
                    }
                    if (temp_a0_2 == 0) {
                        M2C_FIELD(temp_v0, u16 *, 0) = (u16) ((M2C_FIELD(temp_v0, u16 *, 0) & ~0x780) | 0x300);
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0, u8 *, 1) & ~0x78) | 8);
                        M2C_FIELD(temp_v0, u16 *, 0) = (u16) ((M2C_FIELD(temp_v0, u16 *, 0) & ~0x780) | 0x80);
                    }
                }
                break;
            }
        }
        var_s5 += 1;
        if (var_s5 < 0x25) {
            goto loop_2;
        }
        var_s6 += 1;
    } while (var_s6 < 0x48);
}
