/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00326070(void *);
extern int Pes6BitSet_Write(void *, int, int);
extern int Pes6BitSet_Lookup(void *, int);
extern s32 func_003389D0(s32, s32);
s32 func_0033A200(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a2_10;
    s32 var_a2_11;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a2_6;
    s32 var_a2_7;
    s32 var_a2_8;
    s32 var_a2_9;
    u32 temp_v0;
    void *temp_s4;

    temp_s4 = M2C_FIELD(arg1, void **, 0x44);
    temp_s1 = func_003389D0((s32) arg1, 0) & 0xFF;
    temp_s0 = func_003389D0((s32) arg1, 2);
    temp_s2 = temp_s1 & 0xFF;
    temp_s3 = func_003389D0((s32) arg1, 1);
    temp_s6 = temp_s0 >= 0xE;
    temp_s1_2 = temp_s2 == 0;
    temp_s0_2 = M2C_FIELD((temp_s2 + temp_s4), u8 *, 0x8D0) == 0;
    Pes6BitSet_Write(arg0, 4, func_00326070(temp_s4));
    var_a2 = 0;
    if (temp_s3 == 2) {
        temp_v0 = M2C_FIELD(temp_s4, s32 *, 0x2C) - 0x29;
        var_a0 = 0;
        if ((temp_v0 < 4U) && ((1 << temp_v0) & 0xD)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            var_a2 = 1;
        }
    }
    Pes6BitSet_Write(arg0, 6, var_a2);
    Pes6BitSet_Write(arg0, 7, 0);
    var_a2_2 = M2C_FIELD(temp_s4, s32 *, 0x18) == 5;
    if (var_a2_2 != 0) {
        var_a2_2 = temp_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x1A, var_a2_2);
    var_a2_3 = M2C_FIELD(temp_s4, s32 *, 0x18) == 4;
    if (var_a2_3 != 0) {
        var_a2_3 = temp_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x1B, var_a2_3);
    var_a2_4 = M2C_FIELD(temp_s4, s32 *, 0x18) == 3;
    if (var_a2_4 != 0) {
        var_a2_4 = temp_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x1C, var_a2_4);
    var_a2_5 = temp_s3 == 2;
    if (var_a2_5 == 0) {
        var_a2_5 = M2C_FIELD(((temp_s2 * 4) + temp_s4), s32 *, 0x40) == 0xA;
    }
    if (var_a2_5 != 0) {
        var_a2_5 = M2C_FIELD(temp_s4, s32 *, 0x2C) == 0x2C;
    }
    if (var_a2_5 != 0) {
        var_a2_5 = M2C_FIELD(temp_s4, s32 *, 0x30) == 6;
    }
    Pes6BitSet_Write(arg0, 0x1D, var_a2_5);
    var_a2_6 = 0;
    if (temp_s3 == 2) {
        temp_v1 = M2C_FIELD(temp_s4, s32 *, 0x2C);
        var_a0_2 = 1;
        if ((temp_v1 != 0x29) && (temp_v1 != 0x2B)) {
            var_a0_2 = 0;
        }
        if (var_a0_2 != 0) {
            var_a2_6 = 1;
        }
    }
    Pes6BitSet_Write(arg0, 0x1E, var_a2_6);
    Pes6BitSet_Write(arg0, 0xB, M2C_FIELD(temp_s4, s32 *, 0x30) == 2);
    Pes6BitSet_Write(arg0, 0xC, 0);
    Pes6BitSet_Write(arg0, 0xD, 0);
    temp_s2_2 = temp_s1_2 == 0;
    var_a2_7 = 0;
    if ((temp_s2_2 != 0) && (temp_s0_2 != 0)) {
        var_a2_7 = 1;
    }
    Pes6BitSet_Write(arg0, 0xF, var_a2_7);
    var_a2_8 = temp_s1_2 != 0;
    if (var_a2_8 != 0) {
        var_a2_8 = temp_s0_2 == 0;
    }
    Pes6BitSet_Write(arg0, 0x10, var_a2_8);
    var_a2_9 = temp_s1_2 != 0;
    if (var_a2_9 != 0) {
        var_a2_9 = temp_s0_2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x11, var_a2_9);
    var_a2_10 = temp_s2_2 != 0;
    if (var_a2_10 != 0) {
        var_a2_10 = temp_s0_2 == 0;
    }
    Pes6BitSet_Write(arg0, 0x12, var_a2_10);
    temp_s0_3 = Pes6BitSet_Lookup(arg0, 0xF);
    temp_s0_4 = temp_s0_3 | Pes6BitSet_Lookup(arg0, 0x10);
    temp_s0_5 = Pes6BitSet_Lookup(arg0, 0x11) | temp_s0_4;
    var_a2_11 = (Pes6BitSet_Lookup(arg0, 0x12) | temp_s0_5) != 0;
    if (var_a2_11 != 0) {
        var_a2_11 = M2C_FIELD(temp_s4, s32 *, 0x30) != 6;
    }
    if (var_a2_11 != 0) {
        var_a2_11 = M2C_FIELD(temp_s4, s32 *, 0x2C) == 0x29;
    }
    Pes6BitSet_Write(arg0, 0xE, var_a2_11);
    temp_s0_6 = Pes6BitSet_Lookup(arg0, 0xB);
    temp_s0_7 = temp_s0_6 | Pes6BitSet_Lookup(arg0, 0xC);
    temp_s0_8 = Pes6BitSet_Lookup(arg0, 0xD) | temp_s0_7;
    temp_s0_9 = Pes6BitSet_Lookup(arg0, 0xE) | temp_s0_8;
    temp_s0_10 = Pes6BitSet_Lookup(arg0, 0x1A) | temp_s0_9;
    temp_s0_11 = Pes6BitSet_Lookup(arg0, 0x1B) | temp_s0_10;
    temp_s0_12 = Pes6BitSet_Lookup(arg0, 0x1D) | temp_s0_11;
    Pes6BitSet_Write(arg0, 0xA, Pes6BitSet_Lookup(arg0, 0x1E) | temp_s0_12);
    Pes6BitSet_Write(arg0, 5, Pes6BitSet_Lookup(arg0, 0xA));
    return 1;
}
