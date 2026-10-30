/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
M2C_UNK func_0036B170(void *, void *);              /* extern */
M2C_UNK func_0036B580(void *, void *);              /* extern */

s32 func_0036B990(void *arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    u8 temp_s0;
    u8 temp_s0_3;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg2, u8 *, 0x1E);
    var_a2 = 1;
    if ((temp_v1 != 0x5A) && (temp_v1 != 0x78)) {
        var_a2 = 0;
    }
    Pes6BitSet_Write(arg0, 0x13, var_a2);
    func_0036B580(arg0, arg2);
    func_0036B170(arg0, arg2);
    temp_s0 = M2C_FIELD(arg2, u8 *, 0x1E);
    Pes6BitSet_Write(arg0, 0x77, M2C_FIELD(arg2, u8 *, 0x1D) == 2);
    temp_s0_2 = temp_s0 & 0xFF;
    Pes6BitSet_Write(arg0, 0x78, temp_s0_2 < 0x5F);
    Pes6BitSet_Write(arg0, 0x79, temp_s0_2 == 0x5F);
    Pes6BitSet_Write(arg0, 0x7A, temp_s0_2 == 0x60);
    Pes6BitSet_Write(arg0, 0x7B, temp_s0_2 == 0x61);
    Pes6BitSet_Write(arg0, 0x7C, temp_s0_2 == 0x62);
    Pes6BitSet_Write(arg0, 0x7D, temp_s0_2 == 0x63);
    Pes6BitSet_Write(arg0, 0x7E, temp_s0_2 == 0x64);
    var_a2_2 = temp_s0_2 == 0x65;
    if (var_a2_2 == 0) {
        var_a2_2 = temp_s0_2 == 0x66;
    }
    Pes6BitSet_Write(arg0, 0x7F, var_a2_2);
    Pes6BitSet_Write(arg0, 0x80, temp_s0_2 >= 0x67);
    temp_s0_3 = M2C_FIELD(arg2, u8 *, 0x1E);
    Pes6BitSet_Write(arg0, 0x81, M2C_FIELD(arg2, u8 *, 0x1D) == 3);
    temp_s0_4 = temp_s0_3 & 0xFF;
    Pes6BitSet_Write(arg0, 0x82, temp_s0_4 < 0x6E);
    Pes6BitSet_Write(arg0, 0x83, temp_s0_4 == 0x6E);
    Pes6BitSet_Write(arg0, 0x84, temp_s0_4 == 0x6F);
    Pes6BitSet_Write(arg0, 0x85, temp_s0_4 == 0x70);
    Pes6BitSet_Write(arg0, 0x86, temp_s0_4 == 0x71);
    Pes6BitSet_Write(arg0, 0x87, temp_s0_4 == 0x72);
    Pes6BitSet_Write(arg0, 0x88, temp_s0_4 == 0x73);
    var_a2_3 = temp_s0_4 == 0x74;
    if (var_a2_3 == 0) {
        var_a2_3 = temp_s0_4 == 0x75;
    }
    Pes6BitSet_Write(arg0, 0x89, var_a2_3);
    Pes6BitSet_Write(arg0, 0x8A, temp_s0_4 >= 0x76);
    return 1;
}
