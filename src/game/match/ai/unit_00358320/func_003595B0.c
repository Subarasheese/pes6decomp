/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SetDone();                            /* extern */
extern char D_0061C71D[];

s32 func_003595B0(void) {
    (*(s8 *)D_0061C71D) = 0;
    Pes6Job_SetDone();
    return 1;
}
