/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001034E0(s32);                         /* extern */
M2C_UNK func_00103698(s32, s32);                     /* extern */
M2C_UNK Pes6DmaQueue_Send(M2C_UNK, M2C_UNK, s32, s32);  /* extern */

void Pes6VifPacket_EndAndSend(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        func_00103698(arg0, 0);
        func_001034E0(arg0);
        Pes6DmaQueue_Send(1, 1, arg1, arg2);
    }
}
