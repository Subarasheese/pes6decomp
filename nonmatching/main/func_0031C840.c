/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_0030DAF0(M2C_UNK);                         /* extern */
s32 func_0030E780();                                /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00333710(s32, u8);                         /* extern */
s32 func_003414D0(u8 *, M2C_UNK, M2C_UNK);          /* extern */

s32 func_0031C840(s32 arg0, void *arg1) {
    u8 sp6F;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s64 temp_s4_2;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg1, void **, 0x50);
    temp_s4 = M2C_FIELD(arg1, s32 *, 0x44);
    if (func_003414D0(&sp6F, 0, 0xFF) == 0) {
        var_s2 = 1;
        var_s1 = 1;
    } else if (func_00333710(temp_s4, sp6F) < 0xE) {
        var_s2 = 0;
        var_s1 = 1;
    } else {
        var_s2 = 1;
        var_s1 = 0;
    }
    temp_s0_2 = func_00333710(temp_s4, M2C_FIELD(temp_s0, u8 *, 5));
    Pes6BitSet_Write(arg0, 0x3F, func_0030E780() == 0);
    temp_s4_2 = (s64) (func_0030DAF0(0) << 0x30) >> 0x30;
    Pes6BitSet_Write(arg0, 0x40, (temp_s4_2 + ((s64) (func_0030DAF0(1) << 0x30) >> 0x30)) == 1);
    Pes6BitSet_Write(arg0, 0x41, var_s2);
    Pes6BitSet_Write(arg0, 0x42, var_s2);
    Pes6BitSet_Write(arg0, 0x43, var_s1);
    Pes6BitSet_Write(arg0, 0x44, var_s1);
    Pes6BitSet_Write(arg0, 0x45, temp_s0_2 == 0xD);
    Pes6BitSet_Write(arg0, 0x48, temp_s0_2 == 0x11);
    Pes6BitSet_Write(arg0, 0x49, var_s2);
    Pes6BitSet_Write(arg0, 0x4A, var_s1);
    return 1;
}
