/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00862170(u8 *arg0, u8 *arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v1;
    u8 var_v1_2;
    u8 var_v1_3;

    temp_a2 = ((*arg0 << 8) | *arg1) & 0xFFFF;
    if ((temp_a2 >= 0xF040) && (temp_a2 < 0xF9FD)) {
        temp_a2_2 = (temp_a2 + 0x561) & 0xFFFF;
        *arg0 = (u8) (temp_a2_2 >> 8);
        *arg1 = (u8) temp_a2_2;
        return;
    }
    *arg0 *= 2;
    if ((s32) *arg1 >= 0x9F) {
        temp_v1 = *arg0;
        if ((s32) temp_v1 >= 0x3F) {
            var_v1 = temp_v1 + 0x20;
        } else {
            var_v1 = *arg0 - 0x60;
        }
        *arg0 = var_v1;
        var_v1_2 = *arg1 + 2;
    } else {
        temp_v1_2 = *arg0;
        if ((s32) temp_v1_2 >= 0x3F) {
            var_v1_3 = temp_v1_2 + 0x1F;
        } else {
            var_v1_3 = *arg0 - 0x61;
        }
        *arg0 = var_v1_3;
        temp_v1_3 = *arg1;
        if ((s32) temp_v1_3 < 0x7F) {
            var_v1_2 = temp_v1_3 + 0x61;
        } else {
            var_v1_2 = *arg1 + 0x60;
        }
    }
    *arg1 = var_v1_2;
}
