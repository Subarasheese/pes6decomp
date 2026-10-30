/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001838E0(void *, void *, void *, void *, void *, void *, void *, void *, void *);
void func_001836A8(void *arg0) {
    u16 sp10;
    u16 sp14;
    u16 sp18;
    u16 sp1C;
    s32 sp20;
    s32 sp24;
    u16 sp28;
    u16 sp2C;
    s16 temp_a0_5;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_a4;
    s16 temp_a6;
    s16 temp_a7;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    void *temp_s0;

    var_s7 = 0;
    var_s6 = 0;
    var_s5 = 0;
    var_s4 = 0;
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a1;
    temp_s0 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0) + arg0 + 0x980;
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a1;
    if (M2C_FIELD(arg0, s32 *, 0x5ED4) == 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_s6 = (s32) ((temp_a0 > -1) ? temp_a0 : (temp_a0 + 3)) >> 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5ED8) == 0) {
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_s5 = (s32) ((temp_a0_2 > -1) ? temp_a0_2 : (temp_a0_2 + 3)) >> 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EDC) == 0) {
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_s7 = (s32) ((temp_a0_3 > -1) ? temp_a0_3 : (temp_a0_3 + 3)) >> 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EE0) == 0) {
        temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_s4 = (s32) ((temp_a0_4 > -1) ? temp_a0_4 : (temp_a0_4 + 3)) >> 2;
    }
    func_001838E0(arg0, &sp10, &sp14, &sp18, &sp1C, &sp20, &sp24, &sp28, &sp2C);
    sp20 = sp20 + temp_s2 + M2C_FIELD(arg0, s32 *, 0x4DC);
    sp24 = M2C_FIELD(arg0, s32 *, 0x4E0) + (sp24 + temp_s3);
    temp_a7 = (u16) sp20 - sp28;
    temp_a1_2 = (u16) sp20 + sp28;
    temp_a6 = (u16) sp24 - sp2C;
    temp_a0_5 = (temp_a6 - sp18) - var_s6;
    temp_v0 = (u16) sp24 + sp2C;
    temp_a4 = (temp_a7 - sp10) - var_s7;
    temp_v1 = (u16) sp20 + sp14 + (sp28 + var_s4);
    temp_a2 = (u16) sp24 + sp1C + (sp2C + var_s5);
    M2C_FIELD(temp_s0, s16 *, 0x90) = temp_v1;
    M2C_FIELD(temp_s0, s16 *, 0xF2) = temp_a2;
    M2C_FIELD(temp_s0, u16 *, 0x10) = (u16) sp20;
    M2C_FIELD(temp_s0, u16 *, 0x12) = (u16) sp24;
    M2C_FIELD(temp_s0, s16 *, 0x30) = temp_a1_2;
    M2C_FIELD(temp_s0, s16 *, 0x32) = temp_a0_5;
    M2C_FIELD(temp_s0, s16 *, 0x50) = temp_a1_2;
    M2C_FIELD(temp_s0, s16 *, 0x52) = temp_a6;
    M2C_FIELD(temp_s0, s16 *, 0x70) = temp_v1;
    M2C_FIELD(temp_s0, s16 *, 0x72) = temp_a6;
    M2C_FIELD(temp_s0, s16 *, 0x92) = temp_v0;
    M2C_FIELD(temp_s0, s16 *, 0xB0) = temp_a1_2;
    M2C_FIELD(temp_s0, s16 *, 0xB2) = temp_v0;
    M2C_FIELD(temp_s0, s16 *, 0xD0) = temp_a1_2;
    M2C_FIELD(temp_s0, s16 *, 0xD2) = temp_a2;
    M2C_FIELD(temp_s0, s16 *, 0xF0) = temp_a7;
    M2C_FIELD(temp_s0, s16 *, 0x110) = temp_a7;
    M2C_FIELD(temp_s0, s16 *, 0x112) = temp_v0;
    M2C_FIELD(temp_s0, s16 *, 0x130) = temp_a4;
    M2C_FIELD(temp_s0, s16 *, 0x132) = temp_v0;
    M2C_FIELD(temp_s0, s16 *, 0x1B2) = temp_a0_5;
    M2C_FIELD(temp_s0, s16 *, 0x150) = temp_a4;
    M2C_FIELD(temp_s0, s16 *, 0x172) = temp_a6;
    M2C_FIELD(temp_s0, s16 *, 0x190) = temp_a7;
    M2C_FIELD(temp_s0, s16 *, 0x1B0) = temp_a1_2;
    M2C_FIELD(temp_s0, s16 *, 0x152) = temp_a6;
    M2C_FIELD(temp_s0, s16 *, 0x170) = temp_a7;
    M2C_FIELD(temp_s0, s16 *, 0x192) = temp_a0_5;
}
