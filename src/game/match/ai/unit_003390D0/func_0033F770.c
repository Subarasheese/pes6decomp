/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6BitSet_Initialize(void *, M2C_UNK, void *);
M2C_UNK func_00333440(M2C_UNK, void *, M2C_UNK);
M2C_UNK func_00338930(s32);
s32 func_003389D0(s32, M2C_UNK);
M2C_UNK func_0033E280(void *, s32, s32);
s32 func_0033F770(s32 arg0) {
    u8 spB0[0x20];
    u8 sp20[0x90];

    Pes6BitSet_Initialize(&spB0, 0x23, &sp20);
    func_0033E280(&spB0, arg0, func_003389D0(arg0, 0) & 0xFF);
    func_00333440(0xA8, &spB0, 1);
    func_00338930(arg0);
    return 1;
}
