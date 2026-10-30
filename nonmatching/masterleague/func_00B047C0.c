/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 *func_00223C10(s32, s32);                        /* extern */
s32 func_00224D90(s32, s32);                        /* extern */
void *func_00994C60(s32, s32);                      /* extern */

s32 func_00B047C0(s32 arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 temp_a1;
    void *temp_v0_3;

    temp_s1 = arg0 & 0xFF;
    if (temp_s1 >= 0x50) {
        return 0;
    }
    var_s0 = 0;
    var_s2 = 0;
    do {
        if (func_00224D90(arg0, var_s0 & 0xFF) & 0xFFFF) {
            temp_v0 = func_00223C10(arg0, var_s0 & 0xFF);
            if (temp_v0 == NULL) {
                var_v0 = 0;
            } else {
                temp_v1 = *temp_v0 & 0xF;
                if ((temp_v1 != 7) && (temp_v1 != 6) && (temp_v1 != 5)) {
                    var_v0 = 0;
                } else {
                    var_v0 = 1;
                }
            }
            if (var_v0 == 0) {
                temp_v0_2 = func_00223C10(arg0, var_s0 & 0xFF);
                if (temp_v0_2 == NULL) {
                    var_v0_2 = 0;
                } else {
                    temp_v1_2 = *temp_v0_2 & 0xF;
                    if ((temp_v1_2 != 0xA) && (temp_v1_2 != 9) && (temp_v1_2 != 8)) {
                        var_v0_2 = 0;
                    } else {
                        var_v0_2 = 1;
                    }
                }
                if (var_v0_2 == 0) {
                    var_s2 = (var_s2 + 1) & 0xFF;
                }
            }
        }
        var_s0 += 1;
    } while (var_s0 < 0x20);
    var_s0_2 = 0;
    do {
        temp_v0_3 = func_00994C60(temp_s1, var_s0_2);
        if ((temp_v0_3 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x39) >> 0x3C) == 2)) {
            temp_a1 = M2C_FIELD(temp_v0_3, u8 *, 0);
            if (!(temp_a1 & 1)) {
                var_s2 = (var_s2 + 1) & 0xFF;
                if (((u64) ((s64) temp_a1 << 0x39) >> 0x3A) == 4) {
                    var_s2 = (var_s2 - 1) & 0xFF;
                }
            } else if (((u64) ((s64) (u16) M2C_FIELD(temp_v0_3, u8 *, 0) << 0x35) >> 0x3C) != 4) {
                var_s2 = (var_s2 - 1) & 0xFF;
                if (((u64) ((s64) temp_a1 << 0x39) >> 0x3A) == 4) {
                    var_s2 = (var_s2 + 1) & 0xFF;
                }
            }
        }
        var_s0_2 += 1;
    } while (var_s0_2 < 0x25);
    return var_s2;
}
