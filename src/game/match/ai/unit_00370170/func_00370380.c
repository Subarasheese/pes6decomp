/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SendMessage(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK Pes6Job_SetDone(s32);                         /* extern */

s32 func_00370380(s32 arg0) {
    Pes6Job_SendMessage(0x71, 0, 1);
    Pes6Job_SetDone(arg0);
    return 1;
}
