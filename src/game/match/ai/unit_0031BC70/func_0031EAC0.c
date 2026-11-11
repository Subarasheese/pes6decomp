/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6BitSet_Initialize(void *, M2C_UNK, void *);
M2C_UNK func_0031E4E0(void *, s32);
M2C_UNK func_00333440(M2C_UNK, void *, M2C_UNK);
M2C_UNK func_00338930(s32);

s32 func_0031EAC0(s32 arg0) {
    u8 sp20[0x1C];
    u8 sp3C[4];

    Pes6BitSet_Initialize(&sp20, 0x1B, &sp3C);
    func_0031E4E0(&sp20, arg0);
    func_00333440(0x31, &sp20, 1);
    func_00338930(arg0);
    return 1;
}
