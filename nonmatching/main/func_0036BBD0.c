/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F2B0(void *);
extern int Pes6BitSet_Write(void *, int, int);
s32 func_00BC8BC0();                                /* extern */
s32 func_00BC8D30();                                /* extern */

s32 func_0036BBD0(void *arg0, M2C_UNK arg1, void *arg2) {
    s32 sp8C;
    s32 temp_s3;
    s32 temp_s6_2;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_s2;
    u8 temp_s0;
    u8 temp_s2;
    u8 temp_s6;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg2, u8 *, 0);
    temp_s1 = arg2 + 0x18;
    func_0030F2B0(&sp8C);
    temp_s6 = M2C_FIELD(arg2, u8 *, 1);
    temp_s2 = M2C_FIELD(arg2, u8 *, 0x18);
    temp_s3 = sp8C == 3;
    if (func_00BC8D30() == 0) {
        var_s2 = 4;
    } else if ((s32) temp_s2 < (func_00BC8BC0() & 0xFF)) {
        temp_v0 = temp_s6 & 0xFF;
        if (temp_v0 != temp_s2) {
            if (temp_v0 >= (s32) temp_s2) {
                var_s2 = 4;
            } else {
                var_s2 = 2;
            }
        } else {
            var_s2 = 3;
        }
    } else {
        var_s2 = 1;
    }
    Pes6BitSet_Write(arg0, 3, M2C_FIELD(arg2, u8 *, 2) == 0);
    temp_s6_2 = temp_s3 == 0;
    Pes6BitSet_Write(arg0, 4, temp_s6_2);
    Pes6BitSet_Write(arg0, 6, temp_s0 == 0);
    Pes6BitSet_Write(arg0, 7, temp_s0 == 1);
    Pes6BitSet_Write(arg0, 8, temp_s0 == 2);
    Pes6BitSet_Write(arg0, 0xA, temp_s0 == 0);
    Pes6BitSet_Write(arg0, 0xB, temp_s3);
    Pes6BitSet_Write(arg0, 0xC, M2C_FIELD(arg2, u8 *, 2) == 1);
    var_s0 = 0;
    if ((var_s2 == 4) && (func_00BC8D30() != 0)) {
        var_s0 = 1;
    }
    Pes6BitSet_Write(arg0, 0xD, var_s0);
    var_a2 = M2C_FIELD(arg2, s16 *, 0x14) == M2C_FIELD(temp_s1, s16 *, 0x28);
    if (var_a2 != 0) {
        var_a2 = M2C_FIELD(arg2, s16 *, 0x16) == M2C_FIELD(temp_s1, s16 *, 0x2A);
    }
    if (var_a2 != 0) {
        var_a2 = (M2C_FIELD(temp_s1, s32 *, 0x2C) & 1) != 0;
    }
    Pes6BitSet_Write(arg0, 0xE, var_a2);
    Pes6BitSet_Write(arg0, 0xF, temp_s6_2);
    Pes6BitSet_Write(arg0, 0x10, temp_s3);
    return 1;
}
