/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0012FC30(void *arg0, void *arg1) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 var_f0;
    s32 var_f0_2;
    s32 var_f0_3;
    u16 temp_a3;
    u16 temp_a3_2;
    u16 temp_a3_3;

    temp_a3 = M2C_FIELD(arg1, u16 *, 0);
    if (temp_a3 != 0) {
        spC = ((temp_a3 & 0x3FF) << 0xD) | (((((s32) temp_a3 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a3 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0 = spC;
    } else {
        var_f0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_f0;
    temp_a3_2 = M2C_FIELD(arg1, u16 *, 2);
    if (temp_a3_2 != 0) {
        sp8 = ((temp_a3_2 & 0x3FF) << 0xD) | (((((s32) temp_a3_2 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a3_2 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_2 = sp8;
    } else {
        var_f0_2 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_f0_2;
    temp_a3_3 = M2C_FIELD(arg1, u16 *, 4);
    if (temp_a3_3 != 0) {
        sp4 = ((temp_a3_3 & 0x3FF) << 0xD) | (((((s32) temp_a3_3 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a3_3 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_3 = sp4;
    } else {
        var_f0_3 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_f0_3;
    return arg1 + 6;
}
