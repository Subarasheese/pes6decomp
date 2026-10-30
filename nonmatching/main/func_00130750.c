/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003FB788;
extern void *D_003FB78C;

void func_00130750(void *arg0) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 var_f0;
    s32 var_f0_2;
    s32 var_f0_3;
    s32 var_f0_4;
    s32 var_f0_5;
    s32 var_f0_6;
    u16 temp_a3;
    u16 temp_a4;
    u16 temp_a4_2;
    u16 temp_a4_3;
    u16 temp_a5;
    u16 temp_a5_2;
    void *temp_a1;
    void *temp_v1;

    temp_a1 = D_003FB788;
    temp_v1 = D_003FB78C;
    D_003FB788 = temp_a1 + 6;
    D_003FB78C = temp_v1 + 6;
    temp_a5 = M2C_FIELD(temp_a1, u16 *, 0);
    if (temp_a5 != 0) {
        sp1C = ((temp_a5 & 0x3FF) << 0xD) | (((((s32) temp_a5 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a5 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0 = sp1C;
    } else {
        var_f0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA0) = var_f0;
    temp_a5_2 = M2C_FIELD(temp_a1, u16 *, 2);
    if (temp_a5_2 != 0) {
        sp18 = ((temp_a5_2 & 0x3FF) << 0xD) | (((((s32) temp_a5_2 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a5_2 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_2 = sp18;
    } else {
        var_f0_2 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA4) = var_f0_2;
    temp_a4 = M2C_FIELD(temp_a1, u16 *, 4);
    if (temp_a4 != 0) {
        sp14 = ((temp_a4 & 0x3FF) << 0xD) | (((((s32) temp_a4 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a4 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_3 = sp14;
    } else {
        var_f0_3 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = var_f0_3;
    temp_a4_2 = M2C_FIELD(temp_v1, u16 *, 0);
    if (temp_a4_2 != 0) {
        sp10 = ((temp_a4_2 & 0x3FF) << 0xD) | (((((s32) temp_a4_2 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a4_2 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_4 = sp10;
    } else {
        var_f0_4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = var_f0_4;
    temp_a4_3 = M2C_FIELD(temp_v1, u16 *, 2);
    if (temp_a4_3 != 0) {
        spC = ((temp_a4_3 & 0x3FF) << 0xD) | (((((s32) temp_a4_3 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a4_3 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_5 = spC;
    } else {
        var_f0_5 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = var_f0_5;
    temp_a3 = M2C_FIELD(temp_v1, u16 *, 4);
    if (temp_a3 != 0) {
        sp8 = ((temp_a3 & 0x3FF) << 0xD) | (((((s32) temp_a3 >> 0xF) & 1) << 0x1F) | (((((s32) temp_a3 >> 0xA) & 0x1F) + 0x70) << 0x17));
        var_f0_6 = sp8;
    } else {
        var_f0_6 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = var_f0_6;
}
