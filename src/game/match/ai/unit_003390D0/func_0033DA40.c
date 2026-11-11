/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6BitSet_Initialize(void *, M2C_UNK, void *);
M2C_UNK Pes6BitSet_Write(void *, M2C_UNK, s32);
M2C_UNK func_00333440(M2C_UNK, void *, M2C_UNK);
M2C_UNK func_00338930(void *);

s32 func_0033DA40(void *arg0) {
    u8 sp30[0x1C];
    u8 sp4C[4];
    s32 temp_16;

    temp_16 = M2C_FIELD(arg0, s32 *, 0x30) != 1;
    Pes6BitSet_Initialize(&sp30, 2, &sp4C);
    Pes6BitSet_Write(&sp30, 1, temp_16);
    func_00333440(0x36, &sp30, 1);
    func_00338930(arg0);
    return 1;
}
