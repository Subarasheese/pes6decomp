/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0030E780();                                /* extern */
u32 func_0030E790();                                /* extern */
s32 Pes6BitSet_Lookup(s32, M2C_UNK);                    /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00333710(s32, u8);                         /* extern */
s32 func_003414D0(u8 *, M2C_UNK, M2C_UNK);          /* extern */

s32 func_0031CF30(s32 arg0, void *arg1) {
    u8 sp6F;
    s32 temp_s0;
    s32 temp_s4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s2;
    void *temp_s1;

    temp_s4 = M2C_FIELD(arg1, s32 *, 0x44);
    temp_s1 = M2C_FIELD(arg1, void **, 0x50);
    temp_s0 = func_0030E780() == 0;
    var_s2 = 0;
    if (func_003414D0(&sp6F, 1, 0xFF) == 0) {
        if ((func_003414D0(&sp6F, 0, 0xFF) != 0) && (func_00333710(temp_s4, sp6F) == 0x10) && (M2C_FIELD(temp_s1, u8 *, 5) == sp6F)) {
            goto block_9;
        }
    } else if ((func_00333710(temp_s4, sp6F) == 0xA) && (M2C_FIELD(temp_s1, u8 *, 5) == sp6F)) {
block_9:
        var_s2 = 1;
    }
    Pes6BitSet_Write(arg0, 0x18, var_s2 & (M2C_FIELD(temp_s1, u8 *, 6) == 0));
    var_a2 = temp_s0 != 0;
    if (var_a2 != 0) {
        var_a2 = func_0030E790() < 0x169U;
    }
    Pes6BitSet_Write(arg0, 0x19, var_a2);
    var_a2_2 = Pes6BitSet_Lookup(arg0, 0x19) == 0;
    if (var_a2_2 != 0) {
        var_a2_2 = temp_s0 != 0;
    }
    Pes6BitSet_Write(arg0, 0x1C, var_a2_2);
    return 1;
}
