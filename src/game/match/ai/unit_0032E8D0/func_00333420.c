/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SetDone();                            /* extern */
extern s8 D_003E9F1C;

s32 func_00333420(void) {
    D_003E9F1C = 0;
    Pes6Job_SetDone();
    return 1;
}
