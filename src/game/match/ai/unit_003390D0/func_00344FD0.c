/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Job_SetDone(void *);                      /* extern */
M2C_UNK func_00356A90(s32);                         /* extern */

s32 func_00344FD0(void *arg0) {
    func_00356A90(M2C_FIELD(arg0, s32 *, 0x4C));
    Pes6Job_SetDone(arg0);
    return 1;
}
