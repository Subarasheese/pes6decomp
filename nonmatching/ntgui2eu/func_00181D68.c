/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001838E0(void *, void *, void *, void *, void *, void *, void *, void *, void *);
M2C_UNK func_00164898(s32, s32, void *, s32, s32, s32, void *); /* extern */

void func_00181D68(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;

    var_s7 = 0;
    var_s6 = 0;
    var_s5 = 0;
    var_s4 = 0;
    temp_v0 = arg0 + 0x910;
    temp_s2 = temp_v0 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0);
    sp10 = M2C_FIELD(temp_v0, s32 *, 0x55A0);
    temp_s3 = temp_s2 + 0x70;
    sp14 = M2C_FIELD(temp_v0, s32 *, 0x55A4);
    sp18 = M2C_FIELD(temp_v0, s32 *, 0x55A8);
    sp1C = M2C_FIELD(temp_v0, s32 *, 0x55AC);
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
    temp_s0 = arg0 + 0x5C0;
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20, sp24, temp_s3);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + sp28, ((sp24 - sp2C) - sp18) - var_s6, temp_s2 + 0x90);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + sp28, sp24 - sp2C, temp_s2 + 0xB0);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + var_s4 + (sp14 + sp28), sp24 - sp2C, temp_s2 + 0xD0);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + var_s4 + (sp14 + sp28), sp24 + sp2C, temp_s2 + 0xF0);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + sp28, sp24 + sp2C, temp_s2 + 0x110);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + sp28, sp24 + var_s5 + (sp1C + sp2C), temp_s2 + 0x130);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 - sp28, sp24 + var_s5 + (sp1C + sp2C), temp_s2 + 0x150);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 - sp28, sp24 + sp2C, temp_s2 + 0x170);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), ((sp20 - sp28) - sp10) - var_s7, sp24 + sp2C, temp_s2 + 0x190);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), ((sp20 - sp28) - sp10) - var_s7, sp24 - sp2C, temp_s2 + 0x1B0);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 - sp28, sp24 - sp2C, temp_s2 + 0x1D0);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 - sp28, ((sp24 - sp2C) - sp18) - var_s6, temp_s2 + 0x1F0);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s0, M2C_FIELD(arg0, s32 *, 0x618), sp20 + sp28, ((sp24 - sp2C) - sp18) - var_s6, temp_s2 + 0x210);
}
