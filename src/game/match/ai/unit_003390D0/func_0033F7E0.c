/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6BitSet_Initialize(void *, M2C_UNK, void *);
M2C_UNK Pes6Job_SendMessage(M2C_UNK, void *, M2C_UNK);
M2C_UNK Pes6Job_SetDone(s32);
s32 Pes6Job_GetArg(s32, M2C_UNK);
M2C_UNK func_0033E5C0(void *, s32, s32);
s32 func_0033F7E0(s32 arg0) {
    u8 sp830[0x20];
    u8 sp20[0x810];

    Pes6BitSet_Initialize(&sp830, 0x201, &sp20);
    func_0033E5C0(&sp830, arg0, Pes6Job_GetArg(arg0, 0) & 0xFF);
    Pes6Job_SendMessage(0xA7, &sp830, 1);
    Pes6Job_SetDone(arg0);
    return 1;
}
