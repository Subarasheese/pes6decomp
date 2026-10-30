/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_0030DAF0(u8);                              /* extern */
M2C_UNK func_0030DEB0(s16 *, u8);                   /* extern */
M2C_UNK func_0030E010(s16 *, u8);                   /* extern */
s32 Pes6BitSet_Lookup(s32, M2C_UNK);                    /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325DE0(void *);                          /* extern */
s32 func_00325EF0(void *);                          /* extern */
s32 func_00325FC0(void *, u8);                      /* extern */
M2C_UNK func_00326E40(s16 *, void *, u8);           /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_00317650(s32 arg0, void *arg1, void *arg2) {
    s16 sp9A;
    s16 sp9C;
    s16 sp9E;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s6;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 temp_s3;

    if (M2C_FIELD(arg1, u8 *, 7) != 0) {
        return 0;
    }
    temp_s2 = M2C_FIELD(arg2, s32 *, 0);
    temp_s3 = M2C_FIELD(arg1, u8 *, 5);
    func_0030DEB0(&sp9E, M2C_FIELD(arg1, u8 *, 0xA));
    func_0030E010(&sp9C, M2C_FIELD(arg1, u8 *, 0xA));
    func_00326E40(&sp9A, arg2, M2C_FIELD(arg1, u8 *, 0xA));
    sp9A += 1;
    temp_s6 = func_00325DE0(arg2);
    if (func_00341910(1, 5, 0xA) != 0) {
        var_s0 = sp9E >= 1;
        if (var_s0 != 0) {
            var_s0 = sp9E < 8;
        }
    } else {
        var_s0 = sp9E >= 2;
        if (var_s0 != 0) {
            var_s0 = sp9E < 8;
        }
    }
    var_v0 = func_00325FC0(arg2, temp_s3) != 0;
    if (var_v0 == 0) {
        var_v0 = Pes6BitSet_Lookup(arg0, 0x7A) != 0;
    }
    if (var_v0 == 0) {
        var_v0 = Pes6BitSet_Lookup(arg0, 0x7B) != 0;
        if (var_v0 == 0) {
            var_v0 = Pes6BitSet_Lookup(arg0, 0x7C) != 0;
        }
        if (var_v0 == 0) {
            var_v0 = Pes6BitSet_Lookup(arg0, 0x7D) != 0;
        }
    }
    Pes6BitSet_Write(arg0, 0x9F, var_v0 ^ 1);
    var_a2 = temp_s2 == 6;
    if (var_a2 != 0) {
        var_a2 = (M2C_FIELD(arg2, s16 *, 0x38) - 1) == sp9E;
    }
    if (var_a2 != 0) {
        var_a2 = (s32) M2C_FIELD(arg2, u8 *, 0xD) >= 3;
    }
    Pes6BitSet_Write(arg0, 0xA0, var_a2);
    var_a2_2 = temp_s2 == 6;
    if (var_a2_2 != 0) {
        var_a2_2 = temp_s6 == 0;
    }
    if (var_a2_2 != 0) {
        var_a2_2 = var_s0 != 0;
    }
    Pes6BitSet_Write(arg0, 0xA2, var_a2_2);
    Pes6BitSet_Write(arg0, 0xA3, sp9E == 1);
    Pes6BitSet_Write(arg0, 0xA4, sp9E == 2);
    Pes6BitSet_Write(arg0, 0xA5, sp9E == 3);
    Pes6BitSet_Write(arg0, 0xA6, sp9E == 4);
    Pes6BitSet_Write(arg0, 0xA7, sp9E == 5);
    Pes6BitSet_Write(arg0, 0xA8, sp9E == 6);
    Pes6BitSet_Write(arg0, 0xA9, sp9E == 7);
    var_a2_3 = func_00325EF0(arg2) != 0;
    if (var_a2_3 == 0) {
        var_a2_3 = temp_s6 != 0;
    }
    if (var_a2_3 != 0) {
        var_a2_3 = sp9E >= 2;
        if (var_a2_3 != 0) {
            var_a2_3 = sp9E < 8;
        }
    }
    Pes6BitSet_Write(arg0, 0xAA, var_a2_3);
    Pes6BitSet_Write(arg0, 0xAB, sp9E == 2);
    Pes6BitSet_Write(arg0, 0xAC, sp9E == 3);
    Pes6BitSet_Write(arg0, 0xAD, sp9E == 4);
    Pes6BitSet_Write(arg0, 0xAE, sp9E == 5);
    Pes6BitSet_Write(arg0, 0xAF, sp9E == 6);
    Pes6BitSet_Write(arg0, 0xB0, sp9E == 7);
    temp_s0 = Pes6BitSet_Lookup(arg0, 0xAA);
    Pes6BitSet_Write(arg0, 0xA1, temp_s0 | Pes6BitSet_Lookup(arg0, 0xA2));
    var_s1 = 0;
    if ((sp9C == ((s64) (func_0030DAF0(temp_s3) << 0x30) >> 0x30)) && (sp9C >= 4)) {
        var_s1 = 1;
    }
    Pes6BitSet_Write(arg0, 0xB1, var_s1);
    Pes6BitSet_Write(arg0, 0xB2, (sp9A >= 2) & (sp9C == 1));
    Pes6BitSet_Write(arg0, 0xB3, sp9A == 2);
    Pes6BitSet_Write(arg0, 0xB4, sp9A == 3);
    Pes6BitSet_Write(arg0, 0xB5, sp9A == 4);
    Pes6BitSet_Write(arg0, 0xB6, sp9A == 5);
    Pes6BitSet_Write(arg0, 0xB7, sp9A == 6);
    Pes6BitSet_Write(arg0, 0xB8, sp9A == 7);
    Pes6BitSet_Write(arg0, 0xB9, sp9A == 8);
    Pes6BitSet_Write(arg0, 0xBA, sp9A == 9);
    Pes6BitSet_Write(arg0, 0xBB, sp9A == 0xA);
    Pes6BitSet_Write(arg0, 0xBC, sp9A == 0xB);
    return 1;
}
