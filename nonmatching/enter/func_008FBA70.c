/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002274D0();                                /* extern */
s32 func_0030F1E0();                                /* extern */
s32 func_0030F200();                                /* extern */
s32 func_00312410();                                /* extern */
s32 Pes6BitSet_Lookup(s32, M2C_UNK);                    /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325D10(void *);                          /* extern */
s32 func_00325DA0(void *);                          /* extern */
s32 func_00325E40(void *);                          /* extern */

s32 func_008FBA70(s32 arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a2;
    s32 var_a2_10;
    s32 var_a2_11;
    s32 var_a2_12;
    s32 var_a2_13;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a2_6;
    s32 var_a2_7;
    s32 var_a2_8;
    s32 var_a2_9;
    u32 temp_v0;

    temp_s3 = M2C_FIELD(arg1, s32 *, 0x2C);
    temp_s2 = func_002274D0();
    temp_s0 = func_00325D10(arg1);
    Pes6BitSet_Write(arg0, 0x86, func_0030F200());
    Pes6BitSet_Write(arg0, 0x87, temp_s3 == 0x28);
    var_a2 = temp_s3 == 0x29;
    if (var_a2 == 0) {
        var_a2 = temp_s3 == 0x2F;
    }
    Pes6BitSet_Write(arg0, 0x88, var_a2);
    temp_v0 = temp_s3 - 0x2A;
    var_a2_2 = 0;
    if ((temp_v0 < 0xEU) && ((1 << temp_v0) & 0x2A41)) {
        var_a2_2 = 1;
    }
    Pes6BitSet_Write(arg0, 0x89, var_a2_2);
    var_a2_3 = temp_s3 == 0x2B;
    if (var_a2_3 == 0) {
        var_a2_3 = temp_s3 == 0x2F;
    }
    Pes6BitSet_Write(arg0, 0x8A, var_a2_3);
    Pes6BitSet_Write(arg0, 0x14D, temp_s3 == 0x32);
    Pes6BitSet_Write(arg0, 0x14E, temp_s3 == 0x34);
    Pes6BitSet_Write(arg0, 0x14F, temp_s3 == 0x36);
    temp_s1 = Pes6BitSet_Lookup(arg0, 0x89);
    Pes6BitSet_Write(arg0, 0x8B, temp_s1 | Pes6BitSet_Lookup(arg0, 0x8A));
    Pes6BitSet_Write(arg0, 0x8C, func_00325E40(arg1));
    temp_s1_2 = temp_s2 == 0;
    Pes6BitSet_Write(arg0, 0x8D, temp_s1_2 & temp_s0);
    Pes6BitSet_Write(arg0, 0x8E, temp_s2 & temp_s0);
    Pes6BitSet_Write(arg0, 0x8F, func_00325DA0(arg1));
    var_a2_4 = temp_s3 == 1;
    if (var_a2_4 == 0) {
        var_a2_4 = temp_s3 == 0xA;
    }
    Pes6BitSet_Write(arg0, 0x90, var_a2_4);
    var_a2_5 = temp_s1_2 != 0;
    if (var_a2_5 != 0) {
        var_a2_5 = temp_s3 == 1;
    }
    Pes6BitSet_Write(arg0, 0x91, var_a2_5);
    var_a2_6 = temp_s2 != 0;
    if (var_a2_6 != 0) {
        var_a2_6 = temp_s3 == 1;
    }
    Pes6BitSet_Write(arg0, 0x92, var_a2_6);
    Pes6BitSet_Write(arg0, 0x93, temp_s3 == 0xA);
    Pes6BitSet_Write(arg0, 0x94, temp_s3 == 2);
    Pes6BitSet_Write(arg0, 0x95, temp_s3 == 3);
    Pes6BitSet_Write(arg0, 0x96, temp_s3 == 4);
    Pes6BitSet_Write(arg0, 0x97, temp_s3 == 5);
    Pes6BitSet_Write(arg0, 0x98, temp_s3 == 6);
    Pes6BitSet_Write(arg0, 0x99, temp_s3 == 7);
    Pes6BitSet_Write(arg0, 0x9A, temp_s1_2);
    Pes6BitSet_Write(arg0, 0x9B, temp_s2);
    var_a2_7 = temp_s3 == 0x10;
    if (var_a2_7 == 0) {
        var_a2_7 = temp_s3 == 0x11;
    }
    Pes6BitSet_Write(arg0, 0x9C, var_a2_7);
    var_a2_8 = temp_s1_2 != 0;
    if (var_a2_8 != 0) {
        var_a2_8 = temp_s3 == 0x10;
    }
    Pes6BitSet_Write(arg0, 0x9D, var_a2_8);
    var_a2_9 = temp_s2 != 0;
    if (var_a2_9 != 0) {
        var_a2_9 = temp_s3 == 0x10;
    }
    Pes6BitSet_Write(arg0, 0x9E, var_a2_9);
    Pes6BitSet_Write(arg0, 0x9F, temp_s3 == 0x11);
    Pes6BitSet_Write(arg0, 0xA0, temp_s3 == 0x15);
    Pes6BitSet_Write(arg0, 0xA1, temp_s3 == 0x1B);
    Pes6BitSet_Write(arg0, 0xA2, temp_s3 == 0x13);
    Pes6BitSet_Write(arg0, 0xA3, temp_s3 == 0x19);
    Pes6BitSet_Write(arg0, 0xA4, temp_s3 == 0x17);
    var_a2_10 = temp_s3 == 0xC;
    if (var_a2_10 == 0) {
        var_a2_10 = temp_s3 == 0xE;
    }
    Pes6BitSet_Write(arg0, 0xA5, var_a2_10);
    Pes6BitSet_Write(arg0, 0xA6, (u32) (temp_s3 - 0x24) < 3U);
    Pes6BitSet_Write(arg0, 0xA7, temp_s3 == 0x27);
    Pes6BitSet_Write(arg0, 0xA8, temp_s3 == 0x1D);
    Pes6BitSet_Write(arg0, 0xA9, temp_s3 == 0x21);
    Pes6BitSet_Write(arg0, 0xAA, temp_s3 == 0x27);
    Pes6BitSet_Write(arg0, 0xAF, temp_s3 == 0x2E);
    Pes6BitSet_Write(arg0, 0xB1, temp_s3 == 0xF);
    Pes6BitSet_Write(arg0, 0xB2, temp_s3 == 0x12);
    Pes6BitSet_Write(arg0, 0xB3, temp_s3 == 0x14);
    Pes6BitSet_Write(arg0, 0xB4, temp_s3 == 0x16);
    Pes6BitSet_Write(arg0, 0xB5, temp_s3 == 0x1A);
    Pes6BitSet_Write(arg0, 0xB6, temp_s3 == 0x18);
    var_a2_11 = temp_s3 == 0xB;
    if (var_a2_11 == 0) {
        var_a2_11 = temp_s3 == 0xD;
    }
    Pes6BitSet_Write(arg0, 0xB7, var_a2_11);
    var_a2_12 = temp_s3 == 0x1C;
    if (var_a2_12 == 0) {
        var_a2_12 = temp_s3 == 0x1F;
    }
    Pes6BitSet_Write(arg0, 0xB9, var_a2_12);
    var_a2_13 = temp_s3 == 0x20;
    if (var_a2_13 == 0) {
        var_a2_13 = temp_s3 == 0x23;
    }
    Pes6BitSet_Write(arg0, 0xBA, var_a2_13);
    Pes6BitSet_Write(arg0, 0xC0, func_0030F1E0());
    Pes6BitSet_Write(arg0, 0xC1, func_00312410());
    Pes6BitSet_Write(arg0, 0xC2, M2C_FIELD(arg1, s32 *, 0) == 1);
    return 1;
}
