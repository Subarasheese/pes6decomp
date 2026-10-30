/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325930(void *);                          /* extern */
s32 func_00325C20(s32);                             /* extern */
s32 func_00325C50(s32);                             /* extern */
s32 func_0032E980(M2C_UNK);                         /* extern */

s32 func_008FB650(s32 arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_fp;
    s32 var_v0;
    s32 var_v1;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_s3 = M2C_FIELD(arg1, s32 *, 0);
    temp_s0 = M2C_FIELD(arg1, s32 *, 0x14);
    temp_s1 = temp_s3 == 0xC;
    temp_s2 = func_00325C50(temp_s3);
    temp_s6 = func_00325C20(temp_s3);
    var_fp = 1;
    if ((temp_s3 != 4) && (temp_s3 != 5)) {
        var_fp = 0;
    }
    Pes6BitSet_Write(arg0, 0xC6, temp_s0 == 1);
    Pes6BitSet_Write(arg0, 0xC7, temp_s1);
    temp_s7 = temp_s1 == 0;
    Pes6BitSet_Write(arg0, 0xC8, temp_s7);
    Pes6BitSet_Write(arg0, 0xC9, temp_s2);
    Pes6BitSet_Write(arg0, 0xCA, temp_s6);
    Pes6BitSet_Write(arg0, 0xCB, temp_s0 == 2);
    Pes6BitSet_Write(arg0, 0xCC, temp_s1);
    Pes6BitSet_Write(arg0, 0xCD, temp_s7);
    Pes6BitSet_Write(arg0, 0xCE, temp_s2);
    Pes6BitSet_Write(arg0, 0xCF, temp_s6);
    Pes6BitSet_Write(arg0, 0xD0, temp_s3 == 7);
    Pes6BitSet_Write(arg0, 0xD1, M2C_FIELD(arg1, u8 *, 0xD) == 0);
    Pes6BitSet_Write(arg0, 0xD2, M2C_FIELD(arg1, u8 *, 0xD) == 1);
    Pes6BitSet_Write(arg0, 0xD3, M2C_FIELD(arg1, s32 *, 0x30) == 6);
    var_a2 = 0;
    if (temp_s3 == 7) {
        temp_v0 = M2C_FIELD(arg1, s32 *, 0x2C) - 0x24;
        var_v1 = 1;
        if ((temp_v0 < 6U) && ((1 << temp_v0) & 0x31)) {
            var_v1 = 0;
        }
        if (var_v1 != 0) {
            var_a2 = 1;
        }
    }
    Pes6BitSet_Write(arg0, 0xD4, var_a2);
    Pes6BitSet_Write(arg0, 0xD5, M2C_FIELD(arg1, s32 *, 0x30) == 2);
    Pes6BitSet_Write(arg0, 0xD6, M2C_FIELD(arg1, u8 *, 0xD) == 1);
    Pes6BitSet_Write(arg0, 0xD7, M2C_FIELD(arg1, u8 *, 0xD) == 2);
    Pes6BitSet_Write(arg0, 0xD8, func_00325930(arg1));
    Pes6BitSet_Write(arg0, 0xD9, func_0032E980(2));
    Pes6BitSet_Write(arg0, 0xDA, temp_s0 == 1);
    Pes6BitSet_Write(arg0, 0xDB, temp_s0 == 3);
    Pes6BitSet_Write(arg0, 0xDC, temp_s7);
    Pes6BitSet_Write(arg0, 0xDD, temp_s2);
    Pes6BitSet_Write(arg0, 0xDE, temp_s6);
    Pes6BitSet_Write(arg0, 0xE0, temp_s1);
    Pes6BitSet_Write(arg0, 0xE1, temp_s0 == 4);
    Pes6BitSet_Write(arg0, 0xE2, temp_s7);
    Pes6BitSet_Write(arg0, 0xE3, temp_s2);
    Pes6BitSet_Write(arg0, 0xE4, temp_s6);
    Pes6BitSet_Write(arg0, 0xE7, temp_s1);
    Pes6BitSet_Write(arg0, 0xE8, temp_s0 == 5);
    Pes6BitSet_Write(arg0, 0xE9, temp_s0 == 8);
    var_v0 = temp_s3 == 6;
    var_a2_2 = 1;
    if (var_v0 == 0) {
        var_v0 = var_fp != 0;
    }
    if (var_v0 == 0) {
        temp_v0_2 = M2C_FIELD(arg1, s32 *, 0x2C) - 0x24;
        var_a0 = 0;
        if ((temp_v0_2 < 6U) && ((1 << temp_v0_2) & 0x31)) {
            var_a0 = 1;
        }
        if (var_a0 == 0) {
            var_a2_2 = 0;
        }
    }
    Pes6BitSet_Write(arg0, 0xEA, var_a2_2);
    Pes6BitSet_Write(arg0, 0xEB, var_fp);
    Pes6BitSet_Write(arg0, 0xEC, temp_s3 == 4);
    Pes6BitSet_Write(arg0, 0xED, temp_s3 == 5);
    Pes6BitSet_Write(arg0, 0xEE, var_fp == 0);
    return 1;
}
