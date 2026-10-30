/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Lookup(s32, M2C_UNK);                    /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325EA0(s32 *);                           /* extern */
M2C_UNK func_008FD0B0(s32, s32 *, s32);             /* extern */

s32 func_008FD390(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    u32 temp_v1_2;
    void *temp_s0;

    Pes6BitSet_Write(arg0, 0x65, func_00325EA0(arg1));
    temp_v1 = *arg1;
    var_a2 = 1;
    temp_s0 = arg1 + ((arg2 & 0xFF) * 0x3C) + 0x50;
    if ((temp_v1 != 0x2F) && (temp_v1 != 0x29)) {
        var_a2 = 0;
    }
    Pes6BitSet_Write(arg0, 0x66, var_a2);
    var_a2_2 = M2C_FIELD(temp_s0, s32 *, 0x14) == 2;
    if (var_a2_2 != 0) {
        var_a2_2 = M2C_FIELD(temp_s0, s32 *, 0x18) == 5;
    }
    Pes6BitSet_Write(arg0, 0x67, var_a2_2);
    var_a2_3 = M2C_FIELD(temp_s0, s32 *, 0x14) == 2;
    if (var_a2_3 != 0) {
        var_a2_3 = M2C_FIELD(temp_s0, s32 *, 0x18) < 5;
    }
    Pes6BitSet_Write(arg0, 0x68, var_a2_3);
    Pes6BitSet_Write(arg0, 0x69, M2C_FIELD(temp_s0, s32 *, 0x18) == 5);
    temp_v1_2 = *arg1 - 0x25;
    var_a2_4 = 0;
    if ((temp_v1_2 < 0x14U) && ((1 << temp_v1_2) & 0x80081)) {
        var_a2_4 = 1;
    }
    Pes6BitSet_Write(arg0, 0x6A, var_a2_4);
    Pes6BitSet_Write(arg0, 0x6B, Pes6BitSet_Lookup(arg0, 0x67));
    Pes6BitSet_Write(arg0, 0x6C, Pes6BitSet_Lookup(arg0, 0x68));
    Pes6BitSet_Write(arg0, 0x6D, Pes6BitSet_Lookup(arg0, 0x69));
    func_008FD0B0(arg0, arg1, arg2);
    return 1;
}
