/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SetDone();                            /* extern */

s32 func_0031B8D0(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s8 *, 8) = 0;
    Pes6Job_SetDone();
    return 1;
}
