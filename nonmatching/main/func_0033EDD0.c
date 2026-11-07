/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325C20(s32, s32);                        /* extern */
M2C_UNK func_00325FE0(s32 *, s32 *, s32);           /* extern */
s32 func_00333740(s32, s32);                        /* extern */

s32 func_0033EDD0(s32 arg0, s32 arg1, M2C_UNK arg2, s32 *arg3, s32 arg4, s32 arg5) {
    s32 sp9C;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 var_a2;

    temp_s1 = arg5 & 0xFF;
    temp_v0 = func_00333740(arg1, temp_s1);
    temp_s3 = temp_v0 < 0xD;
    temp_s7 = temp_v0 >= 0xE;
    temp_s2 = temp_v0 == 0xD;
    func_00325FE0(&sp9C, arg3, temp_s1);
    temp_s0 = sp9C == 2;
    temp_s1_2 = sp9C == 1;
    temp_s6 = sp9C == 3;
    Pes6BitSet_Write(arg0, 0x10, func_00325C20(*arg3, sp9C));
    Pes6BitSet_Write(arg0, 0x16, arg4 == 0xD);
    Pes6BitSet_Write(arg0, 0x17, temp_s0);
    Pes6BitSet_Write(arg0, 0x1A, temp_s1_2);
    Pes6BitSet_Write(arg0, 0x20, arg4 >= 0xE);
    Pes6BitSet_Write(arg0, 0x21, temp_s7 & temp_s1_2);
    Pes6BitSet_Write(arg0, 0x24, temp_s0);
    Pes6BitSet_Write(arg0, 0x27, temp_s6);
    Pes6BitSet_Write(arg0, 0x2A, temp_s6 & temp_s2);
    Pes6BitSet_Write(arg0, 0x2D, temp_s1_2 & (temp_s3 | temp_s2));
    Pes6BitSet_Write(arg0, 0x30, temp_s3);
    Pes6BitSet_Write(arg0, 0x31, temp_s2);
    Pes6BitSet_Write(arg0, 0x32, arg4 < 0xD);
    Pes6BitSet_Write(arg0, 0x33, temp_s7 & temp_s0);
    Pes6BitSet_Write(arg0, 0x36, temp_s3 & temp_s1_2);
    Pes6BitSet_Write(arg0, 0x39, temp_s3 & temp_s0);
    temp_s1_3 = temp_s3 & temp_s6;
    temp_s0_2 = temp_s2 & temp_s0;
    Pes6BitSet_Write(arg0, 0x3C, temp_s1_3 | temp_s0_2);
    Pes6BitSet_Write(arg0, 0x3D, temp_s1_3);
    Pes6BitSet_Write(arg0, 0x3E, temp_s0_2);
    var_a2 = temp_s2 != 0;
    if (var_a2 != 0) {
        var_a2 = arg4 == 0xB;
    }
    Pes6BitSet_Write(arg0, 0x41, var_a2);
    return 1;
}
