/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0022CEF0();                                /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_00325930(void *);                          /* extern */
M2C_UNK func_00325B90(s32 *);                       /* extern */
s32 func_00325E40(void *);                          /* extern */

s32 func_008FDFF0(s32 arg0, void *arg1) {
    s32 sp7C;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s5;
    s32 var_a2;
    s32 var_s1;
    u64 temp_v1;

    temp_s0 = func_0022CEF0() & 0xFF;
    func_00325B90(&sp7C);
    temp_s5 = M2C_FIELD(arg1, s32 *, 0x2C);
    temp_s2 = func_00325930(arg1);
    var_s1 = 1;
    if (func_00325E40(arg1) == 0) {
        temp_v1 = temp_s5 - 1;
        var_a2 = 0;
        if ((temp_v1 < 0x3AU) && ((1 << temp_v1) & (0x2DF | (0x02000000 << 0x20)))) {
            var_a2 = 1;
        }
        if (var_a2 == 0) {
            var_s1 = 0;
        }
    }
    Pes6BitSet_Write(arg0, 9, var_s1);
    Pes6BitSet_Write(arg0, 0xA, temp_s0 < 0xF);
    Pes6BitSet_Write(arg0, 0xB, temp_s0 == 0);
    Pes6BitSet_Write(arg0, 0xC, sp7C == 0);
    Pes6BitSet_Write(arg0, 0xD, sp7C == 1);
    Pes6BitSet_Write(arg0, 0xE, temp_s0 == 1);
    Pes6BitSet_Write(arg0, 0xF, temp_s0 == 2);
    Pes6BitSet_Write(arg0, 0x10, temp_s0 == 3);
    Pes6BitSet_Write(arg0, 0x11, temp_s0 == 4);
    Pes6BitSet_Write(arg0, 0x12, temp_s0 == 5);
    Pes6BitSet_Write(arg0, 0x13, temp_s0 == 6);
    Pes6BitSet_Write(arg0, 0x14, temp_s0 == 7);
    Pes6BitSet_Write(arg0, 0x15, temp_s0 == 8);
    Pes6BitSet_Write(arg0, 0x16, temp_s0 == 9);
    Pes6BitSet_Write(arg0, 0x17, temp_s0 == 0xA);
    Pes6BitSet_Write(arg0, 0x18, temp_s0 == 0xB);
    Pes6BitSet_Write(arg0, 0x19, temp_s0 == 0xC);
    Pes6BitSet_Write(arg0, 0x1A, temp_s0 == 0xD);
    Pes6BitSet_Write(arg0, 0x1B, temp_s2);
    Pes6BitSet_Write(arg0, 0x1C, temp_s2);
    Pes6BitSet_Write(arg0, 0x1D, M2C_FIELD(arg1, s32 *, 0x14) == 3);
    return 1;
}
