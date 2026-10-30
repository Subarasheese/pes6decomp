/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00151EA0(s32);                             /* extern */
void *func_00224520();                              /* extern */
s32 func_00227DA0();                                /* extern */

void func_0094D930(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 var_a1;
    s8 var_v1;
    u8 temp_v1;
    void *temp_v0;

    if (((arg0 & 0xFF) < 0x50) && ((arg1 & 0xFF) < 0x20)) {
        temp_v0 = func_00224520();
        if (temp_v0 != NULL) {
            if (func_00227DA0() != 0) {
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 2);
                if (((s32) temp_v1 >= 0) && ((s32) temp_v1 < 5)) {
                    var_a1 = 0x64;
                } else if (((s32) temp_v1 >= 5) && ((s32) temp_v1 < 0xA)) {
                    var_a1 = (func_00151EA0((0xA - temp_v1) & 0xFFFF) & 0xFFFF) + 0x5A;
                } else if (((s32) temp_v1 >= 0xA) && ((s32) temp_v1 < 0x14)) {
                    temp_a1 = func_00151EA0((0x14 - temp_v1) & 0xFFFF) & 0xFFFF;
                    var_a1 = ((temp_a1 * 0x1E) / 20) + ((u32) (temp_a1 * 0x1E) >> 0x1F) + 0x46;
                } else if (((s32) temp_v1 >= 0x14) && ((s32) temp_v1 < 0x28)) {
                    temp_a1_2 = func_00151EA0((0x28 - temp_v1) & 0xFFFF) & 0xFFFF;
                    var_a1 = ((temp_a1_2 * 0x1E) / 20) + ((u32) (temp_a1_2 * 0x1E) >> 0x1F) + 0x32;
                } else if (((s32) temp_v1 >= 0x28) && ((s32) temp_v1 < 0x3C)) {
                    temp_a1_3 = func_00151EA0((0x3C - temp_v1) & 0xFFFF) & 0xFFFF;
                    var_a1 = ((temp_a1_3 * 0x1E) / 20) + ((u32) (temp_a1_3 * 0x1E) >> 0x1F) + 0x1E;
                } else if (((s32) temp_v1 >= 0x3C) && ((s32) temp_v1 < 0x50)) {
                    temp_a1_4 = func_00151EA0((0x50 - temp_v1) & 0xFFFF) & 0xFFFF;
                    var_a1 = ((temp_a1_4 * 0x1E) / 20) + ((u32) (temp_a1_4 * 0x1E) >> 0x1F) + 0xA;
                } else {
                    temp_a1_5 = func_00151EA0((0x64 - temp_v1) & 0xFFFF) & 0xFFFF;
                    var_a1 = ((temp_a1_5 * 0x1E) / 20) + ((u32) (temp_a1_5 * 0x1E) >> 0x1F) + 1;
                }
                if (var_a1 >= 0x65) {
                    var_a1 = 0x64;
                }
                var_v1 = ((var_a1 * 0x28) / 100) + ((u32) (var_a1 * 0x28) >> 0x1F) + 0x3C;
            } else {
                var_v1 = 0x64;
            }
            M2C_FIELD(temp_v0, s8 *, 1) = var_v1;
        }
    }
}
