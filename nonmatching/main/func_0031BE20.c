/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_0030DAF0(M2C_UNK);                         /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0031BE20(s32 arg0) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_a2;
    s32 var_a2_10;
    s32 var_a2_11;
    s32 var_a2_12;
    s32 var_a2_13;
    s32 var_a2_14;
    s32 var_a2_15;
    s32 var_a2_16;
    s32 var_a2_17;
    s32 var_a2_18;
    s32 var_a2_19;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a2_6;
    s32 var_a2_7;
    s32 var_a2_8;
    s32 var_a2_9;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_s6_3;
    s32 var_s6_4;
    s32 var_s6_5;
    s64 temp_s1;
    s64 temp_s2;

    temp_s4 = func_00341910(1, 2, 0xA);
    temp_s2 = (s64) (func_0030DAF0(0) << 0x30) >> 0x30;
    temp_s1 = (s64) (func_0030DAF0(1) << 0x30) >> 0x30;
    var_s6 = temp_s2 == 0;
    temp_s0 = temp_s2 + temp_s1;
    if (var_s6 == 0) {
        var_s6 = temp_s1 == 0;
    }
    Pes6BitSet_Write(arg0, 0x11C, temp_s0 == 1);
    temp_s3 = temp_s4 == 0;
    Pes6BitSet_Write(arg0, 0x11D, temp_s3);
    Pes6BitSet_Write(arg0, 0x11E, temp_s4);
    var_a2 = temp_s0 == 2;
    if (var_a2 != 0) {
        var_a2 = var_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x11F, var_a2);
    Pes6BitSet_Write(arg0, 0x120, temp_s3);
    Pes6BitSet_Write(arg0, 0x121, temp_s4);
    var_a2_2 = temp_s0 == 3;
    if (var_a2_2 != 0) {
        var_a2_2 = var_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x122, var_a2_2);
    Pes6BitSet_Write(arg0, 0x123, temp_s3);
    Pes6BitSet_Write(arg0, 0x124, temp_s4);
    var_a2_3 = temp_s0 == 4;
    if (var_a2_3 != 0) {
        var_a2_3 = var_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x125, var_a2_3);
    Pes6BitSet_Write(arg0, 0x126, temp_s3);
    Pes6BitSet_Write(arg0, 0x127, temp_s4);
    var_a2_4 = temp_s0 == 5;
    if (var_a2_4 != 0) {
        var_a2_4 = var_s6 != 0;
    }
    Pes6BitSet_Write(arg0, 0x128, var_a2_4);
    Pes6BitSet_Write(arg0, 0x129, temp_s3);
    Pes6BitSet_Write(arg0, 0x12A, temp_s4);
    var_s6_2 = temp_s2 == 1;
    if (var_s6_2 == 0) {
        var_s6_2 = temp_s1 == 1;
    }
    var_a2_5 = temp_s0 == 2;
    if (var_a2_5 != 0) {
        var_a2_5 = var_s6_2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x12B, var_a2_5);
    var_a2_6 = temp_s0 == 3;
    if (var_a2_6 != 0) {
        var_a2_6 = var_s6_2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x12C, var_a2_6);
    Pes6BitSet_Write(arg0, 0x12D, temp_s3);
    Pes6BitSet_Write(arg0, 0x12E, temp_s4);
    var_a2_7 = temp_s0 == 4;
    if (var_a2_7 != 0) {
        var_a2_7 = var_s6_2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x12F, var_a2_7);
    Pes6BitSet_Write(arg0, 0x130, temp_s3);
    Pes6BitSet_Write(arg0, 0x131, temp_s4);
    var_a2_8 = temp_s0 == 5;
    if (var_a2_8 != 0) {
        var_a2_8 = var_s6_2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x132, var_a2_8);
    Pes6BitSet_Write(arg0, 0x133, temp_s3);
    Pes6BitSet_Write(arg0, 0x134, temp_s4);
    var_a2_9 = temp_s0 == 6;
    if (var_a2_9 != 0) {
        var_a2_9 = var_s6_2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x135, var_a2_9);
    Pes6BitSet_Write(arg0, 0x136, temp_s3);
    Pes6BitSet_Write(arg0, 0x137, temp_s4);
    var_s6_3 = temp_s2 == 2;
    if (var_s6_3 == 0) {
        var_s6_3 = temp_s1 == 2;
    }
    var_a2_10 = temp_s0 == 4;
    if (var_a2_10 != 0) {
        var_a2_10 = var_s6_3 != 0;
    }
    Pes6BitSet_Write(arg0, 0x138, var_a2_10);
    var_a2_11 = temp_s0 == 5;
    if (var_a2_11 != 0) {
        var_a2_11 = var_s6_3 != 0;
    }
    Pes6BitSet_Write(arg0, 0x139, var_a2_11);
    Pes6BitSet_Write(arg0, 0x13A, temp_s3);
    Pes6BitSet_Write(arg0, 0x13B, temp_s4);
    var_a2_12 = temp_s0 == 6;
    if (var_a2_12 != 0) {
        var_a2_12 = var_s6_3 != 0;
    }
    Pes6BitSet_Write(arg0, 0x13C, var_a2_12);
    Pes6BitSet_Write(arg0, 0x13D, temp_s3);
    Pes6BitSet_Write(arg0, 0x13E, temp_s4);
    var_a2_13 = temp_s0 == 7;
    if (var_a2_13 != 0) {
        var_a2_13 = var_s6_3 != 0;
    }
    Pes6BitSet_Write(arg0, 0x13F, var_a2_13);
    Pes6BitSet_Write(arg0, 0x140, temp_s3);
    Pes6BitSet_Write(arg0, 0x141, temp_s4);
    var_s6_4 = temp_s2 == 3;
    if (var_s6_4 == 0) {
        var_s6_4 = temp_s1 == 3;
    }
    var_a2_14 = temp_s0 == 6;
    if (var_a2_14 != 0) {
        var_a2_14 = var_s6_4 != 0;
    }
    Pes6BitSet_Write(arg0, 0x142, var_a2_14);
    var_a2_15 = temp_s0 == 7;
    if (var_a2_15 != 0) {
        var_a2_15 = var_s6_4 != 0;
    }
    Pes6BitSet_Write(arg0, 0x143, var_a2_15);
    Pes6BitSet_Write(arg0, 0x144, temp_s3);
    Pes6BitSet_Write(arg0, 0x145, temp_s4);
    var_a2_16 = temp_s0 == 8;
    if (var_a2_16 != 0) {
        var_a2_16 = var_s6_4 != 0;
    }
    Pes6BitSet_Write(arg0, 0x146, var_a2_16);
    Pes6BitSet_Write(arg0, 0x147, temp_s3);
    Pes6BitSet_Write(arg0, 0x148, temp_s4);
    var_s6_5 = temp_s2 == 4;
    if (var_s6_5 == 0) {
        var_s6_5 = temp_s1 == 4;
    }
    var_a2_17 = temp_s0 == 8;
    if (var_a2_17 != 0) {
        var_a2_17 = var_s6_5 != 0;
    }
    Pes6BitSet_Write(arg0, 0x149, var_a2_17);
    var_a2_18 = temp_s0 == 9;
    if (var_a2_18 != 0) {
        var_a2_18 = var_s6_5 != 0;
    }
    Pes6BitSet_Write(arg0, 0x14A, var_a2_18);
    Pes6BitSet_Write(arg0, 0x14B, temp_s3);
    Pes6BitSet_Write(arg0, 0x14C, temp_s4);
    var_a2_19 = temp_s2 == 5;
    if (var_a2_19 != 0) {
        var_a2_19 = temp_s1 == 5;
    }
    Pes6BitSet_Write(arg0, 0x14D, var_a2_19);
    return 1;
}
