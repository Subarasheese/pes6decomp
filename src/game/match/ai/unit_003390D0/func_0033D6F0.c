/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SetDone(s32);                         /* extern */
M2C_UNK func_00C6C980(M2C_UNK);                     /* extern */

s32 func_0033D6F0(s32 arg0) {
    func_00C6C980(1);
    Pes6Job_SetDone(arg0);
    return 1;
}
