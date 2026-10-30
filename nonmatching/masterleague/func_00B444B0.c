/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_00B444B0(s32 arg0, s8 *arg1, s8 *arg2) {
    s32 temp_a0;
    u32 var_a4;

    temp_a0 = arg0 & 0xFFFF;
    if ((temp_a0 >= 0x40) && (temp_a0 < 0x54)) {
        var_a4 = temp_a0 - 0x40;
    } else if ((temp_a0 >= 0x54) && (temp_a0 < 0x68)) {
        var_a4 = temp_a0 - 0x40;
    } else if ((temp_a0 >= 0x68) && (temp_a0 < 0x7C)) {
        var_a4 = temp_a0 - 0x40;
    } else if ((temp_a0 >= 0x7C) && (temp_a0 < 0x8E)) {
        var_a4 = temp_a0 - 0x40;
    } else if ((temp_a0 >= 0x8E) && (temp_a0 < 0xA2)) {
        var_a4 = temp_a0 - 0x3E;
    } else if ((temp_a0 >= 0xA2) && (temp_a0 < 0xB5)) {
        var_a4 = temp_a0 - 0x3E;
    } else if ((temp_a0 >= 0xB5) && (temp_a0 < 0xBA)) {
        var_a4 = temp_a0 - 0x3D;
    } else if ((temp_a0 >= 0xBA) && (temp_a0 < 0xCC)) {
        var_a4 = temp_a0 - 0x2E;
    } else {
        var_a4 = 0;
    }
    *arg1 = (var_a4 / 20) + (var_a4 >> 0x1F);
    *arg2 = (s8) ((s32) var_a4 % 20);
}
