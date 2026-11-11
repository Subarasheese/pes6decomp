/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SendMessage(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK Pes6Job_SetDone(void *);                      /* extern */

s32 func_00370550(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x2C) != 0x1C) {
        Pes6Job_SendMessage(0x6F, 0, 1);
    }
    Pes6Job_SetDone(arg0);
    return 1;
}
