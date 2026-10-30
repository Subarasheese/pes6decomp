/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00325E40(void *);
extern int Pes6BitSet_Lookup(void *, int);
extern int func_0030F200(void);
extern s32 func_00325B10(void *);
extern int Pes6BitSet_Write(void *, int, int);
extern int func_00335370(void);
extern s32 func_00325EF0(void *);
extern u8 func_00226F80(void);
extern s32 func_00326070(void *);
extern s32 func_00325DE0(void *);
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_008FA760(void *arg0, void *arg1) {
    u8 sp8F;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    void *temp_s5_2;

    temp_s1 = M2C_FIELD(arg1, s32 *, 0x2C);
    temp_s2 = func_00326070(arg1);
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x30) == 2;
    temp_s6 = func_0030F200();
    if (temp_s2 != 0) {
        temp_s5 = M2C_FIELD(func_00335370(), s32 *, 0xFFC);
        M2C_FIELD(func_00335370(), s32 *, 0x1020) = temp_s5;
    }
    func_003414D0(&sp8F, 2, 0xFF);
    var_a2 = 0;
    var_a1 = 0;
    temp_s5_2 = arg1 + (sp8F * 0x3C) + 0x50;
    if (temp_s0 != 0) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 0);
        var_a0 = 1;
        if ((temp_v1 != 6) && (temp_v1 != 7)) {
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            var_a1 = 1;
        }
    }
    if ((var_a1 != 0) && (temp_s6 == 0)) {
        var_a2 = 1;
    }
    Pes6BitSet_Write(arg0, 2, var_a2);
    Pes6BitSet_Write(arg0, 3, temp_s1 == 0xF);
    Pes6BitSet_Write(arg0, 4, temp_s1 == 0x12);
    Pes6BitSet_Write(arg0, 5, temp_s1 == 0x14);
    Pes6BitSet_Write(arg0, 6, temp_s1 == 0x16);
    Pes6BitSet_Write(arg0, 7, temp_s1 == 0x1A);
    Pes6BitSet_Write(arg0, 8, temp_s1 == 0x18);
    var_a2_2 = temp_s1 == 0xB;
    if (var_a2_2 == 0) {
        var_a2_2 = temp_s1 == 0xD;
    }
    if (var_a2_2 != 0) {
        var_a2_2 = func_00226F80() == 0;
    }
    Pes6BitSet_Write(arg0, 9, var_a2_2);
    Pes6BitSet_Write(arg0, 0xA, M2C_FIELD(arg1, s32 *, 0) == 7);
    Pes6BitSet_Write(arg0, 0xB, M2C_FIELD(arg1, s32 *, 0) == 6);
    var_a2_3 = temp_s0 != 0;
    if (var_a2_3 != 0) {
        var_a2_3 = M2C_FIELD(arg1, s32 *, 0) != 6;
    }
    if (var_a2_3 == 0) {
        var_a2_3 = func_00325B10(arg1) != 0;
        if (var_a2_3 != 0) {
            var_a2_3 = func_00325EF0(arg1) != 0;
            if (var_a2_3 == 0) {
                var_a2_3 = func_00325DE0(arg1) != 0;
            }
        }
    }
    Pes6BitSet_Write(arg0, 0xE, var_a2_3);
    Pes6BitSet_Write(arg0, 0x10, temp_s1 == 0x2F);
    Pes6BitSet_Write(arg0, 0x14, temp_s1 == 0x32);
    Pes6BitSet_Write(arg0, 0x18, temp_s1 == 0x34);
    Pes6BitSet_Write(arg0, 0x1C, temp_s1 == 0x36);
    Pes6BitSet_Write(arg0, 0x20, temp_s2);
    Pes6BitSet_Write(arg0, 0x22, temp_s1 == 0x29);
    Pes6BitSet_Write(arg0, 0x25, temp_s1 == 0x28);
    temp_s0_2 = Pes6BitSet_Lookup(arg0, 0x25);
    Pes6BitSet_Write(arg0, 0x21, temp_s0_2 | Pes6BitSet_Lookup(arg0, 0x22));
    Pes6BitSet_Write(arg0, 0x29, func_00325E40(arg1));
    Pes6BitSet_Write(arg0, 0x2D, temp_s1 == 1);
    var_a2_4 = M2C_FIELD(arg1, s32 *, 0) == 7;
    if (var_a2_4 != 0) {
        var_a2_4 = M2C_FIELD(arg1, s32 *, 0x30) == 2;
    }
    Pes6BitSet_Write(arg0, 0x2E, var_a2_4);
    Pes6BitSet_Write(arg0, 0x2F, M2C_FIELD(temp_s5_2, s32 *, 0x14) == 2);
    Pes6BitSet_Write(arg0, 0x30, M2C_FIELD(temp_s5_2, s32 *, 0x14) >= 3);
    return 1;
}
