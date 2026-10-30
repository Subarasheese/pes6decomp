/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00326F30(int, int, int);
extern int func_00326940(int, int, int);
extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_003264D0(void *, void *, s32);
s32 func_00325930(s32);                             /* extern */
M2C_UNK func_00326510(s32, u8 *, s32);              /* extern */
M2C_UNK func_003266C0(s32 *, s32, s32);             /* extern */
M2C_UNK func_008FD8C0(void *, s32, s32);            /* extern */

s32 func_008FDB80(void *arg0, s32 arg1, s32 arg2) {
    s32 sp98;
    s32 sp9C;
    u8 spA0;
    u8 spA4;
    s32 spA8;
    s32 spAC;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a2_6;
    s32 var_a2_7;
    s32 var_a2_8;
    u8 temp_s0;
    u8 temp_s0_4;
    u8 temp_s7;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_s2 = arg2 & 0xFF;
    func_00326F30((s32) &spAC, arg1, temp_s2);
    func_00326940((s32) &spA8, arg1, temp_s2);
    Pes6BitSet_Write(arg0, 0x21, func_00325930(arg1));
    var_a2 = spAC == 2;
    if (var_a2 != 0) {
        var_a2 = spA8 == 5;
    }
    Pes6BitSet_Write(arg0, 0x22, var_a2);
    var_a2_2 = spAC == 2;
    if (var_a2_2 != 0) {
        var_a2_2 = spA8 == 3;
    }
    Pes6BitSet_Write(arg0, 0x23, var_a2_2);
    Pes6BitSet_Write(arg0, 0x24, spAC == 5);
    func_00326510(arg1, &spA4, temp_s2);
    var_a2_3 = 0;
    var_a1 = 0;
    if (M2C_FIELD(arg1, s32 *, 0) == 6) {
        temp_v1 = M2C_FIELD(arg1, u8 *, 0xD);
        var_a0 = 0;
        if ((temp_v1 != 0xFF) && ((s32) temp_v1 >= 3)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            var_a1 = 1;
        }
    }
    if ((var_a1 != 0) && (spA4 == 0)) {
        var_a2_3 = 1;
    }
    Pes6BitSet_Write(arg0, 0x25, var_a2_3);
    temp_s6 = arg2 & 0xFF;
    temp_s0 = M2C_FIELD(arg1, u8 *, 0xD);
    temp_s7 = M2C_FIELD((temp_s6 + arg1), u8 *, 0x8F0);
    func_00326510(arg1, &spA0, temp_s2);
    temp_s1 = temp_s0 & 0xFF;
    var_a2_4 = M2C_FIELD(arg1, u8 *, 0xD) != 0xFF;
    temp_s0_2 = spA0 == (temp_s1 + 1);
    if (var_a2_4 != 0) {
        var_a2_4 = temp_s1 != 0;
    }
    if (var_a2_4 != 0) {
        var_a2_4 = (temp_s7 & 0xFF) >= 2;
    }
    Pes6BitSet_Write(arg0, 0x26, var_a2_4);
    var_a2_5 = temp_s0_2 != 0;
    if (var_a2_5 != 0) {
        var_a2_5 = temp_s1 == 4;
    }
    Pes6BitSet_Write(arg0, 0x27, var_a2_5);
    var_a2_6 = temp_s0_2 != 0;
    if (var_a2_6 != 0) {
        var_a2_6 = temp_s1 == 3;
    }
    Pes6BitSet_Write(arg0, 0x28, var_a2_6);
    var_a2_7 = temp_s0_2 != 0;
    if (var_a2_7 != 0) {
        var_a2_7 = temp_s1 == 2;
    }
    Pes6BitSet_Write(arg0, 0x29, var_a2_7);
    temp_s0_3 = temp_s7 & 0xFF;
    Pes6BitSet_Write(arg0, 0x2A, temp_s0_3 == 5);
    Pes6BitSet_Write(arg0, 0x2B, temp_s0_3 == 4);
    Pes6BitSet_Write(arg0, 0x2C, temp_s0_3 == 3);
    Pes6BitSet_Write(arg0, 0x2D, temp_s0_3 == 2);
    temp_s0_4 = M2C_FIELD((temp_s6 + arg1), u8 *, 0x8EE);
    func_003264D0(&sp9C, (void *) arg1, temp_s2);
    func_003266C0(&sp98, arg1, temp_s2);
    var_a2_8 = 0;
    var_a1_2 = 0;
    if (!(temp_s0_4 & 0xFF)) {
        temp_v1_2 = M2C_FIELD(arg1, u8 *, 0xD);
        var_a0_2 = 0;
        if ((temp_v1_2 != 0xFF) && ((s32) temp_v1_2 >= 6)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            var_a1_2 = 1;
        }
    }
    if ((var_a1_2 != 0) && (sp98 & 0x10000000)) {
        var_a2_8 = 1;
    }
    Pes6BitSet_Write(arg0, 0x2F, var_a2_8);
    Pes6BitSet_Write(arg0, 0x30, sp9C == 2);
    Pes6BitSet_Write(arg0, 0x31, sp9C == 3);
    func_008FD8C0(arg0, arg1, arg2);
    return 1;
}
