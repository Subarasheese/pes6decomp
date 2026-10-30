/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 *func_00223C10(s32, s32);                        /* extern */
void *func_00223E00(s32);                           /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
u8 *func_0093B3C0(s32);                             /* extern */

s32 func_00B03B10(s32 arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    void *temp_v0;

    if ((arg0 & 0xFF) >= 0x48) {
        return 0;
    }
    var_s2 = 0;
    var_s0 = 0;
    do {
        temp_s1 = func_00224BC0(arg0, var_s2 & 0xFF) & 0xFFFF;
        if (temp_s1 != 0) {
            temp_v0 = func_00223E00(temp_s1);
            if ((temp_v0 != NULL) && ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) != 3)) {
                temp_v0_2 = func_00223C10(arg0, var_s2 & 0xFF);
                if (temp_v0_2 == NULL) {
                    var_v1 = 0;
                } else {
                    temp_v1 = *temp_v0_2 & 0xF;
                    if ((temp_v1 != 7) && (temp_v1 != 6) && (temp_v1 != 5)) {
                        var_v1 = 0;
                    } else {
                        var_v1 = 1;
                    }
                }
                if (var_v1 != 1) {
                    temp_v0_3 = func_00223C10(arg0, var_s2 & 0xFF);
                    if (temp_v0_3 == NULL) {
                        var_v1_2 = 0;
                    } else {
                        temp_v1_2 = *temp_v0_3 & 0xF;
                        if ((temp_v1_2 != 0xA) && (temp_v1_2 != 9) && (temp_v1_2 != 8)) {
                            var_v1_2 = 0;
                        } else {
                            var_v1_2 = 1;
                        }
                    }
                    if (var_v1_2 != 1) {
                        temp_v0_4 = func_0093B3C0(temp_s1);
                        if (temp_v0_4 != NULL) {
                            if (((u64) ((s64) *temp_v0_4 << 0x39) >> 0x3A) == 4) {
                                goto block_29;
                            }
                        } else {
block_29:
                            if (func_00224BC0(arg0, var_s2 & 0xFF) & 0xFFFF) {
                                var_s0 = (var_s0 + 1) & 0xFF;
                            }
                        }
                    }
                }
            }
        }
        var_s2 += 1;
    } while (var_s2 < 0x20);
    return var_s0;
}
