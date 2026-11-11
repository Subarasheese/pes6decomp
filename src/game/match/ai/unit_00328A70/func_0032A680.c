/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0030E540(M2C_UNK);                         /* extern */
M2C_UNK func_0030E560(s32);                         /* extern */
M2C_UNK Pes6Job_SetDone(s32);                         /* extern */

s32 func_0032A680(s32 arg0) {
    func_0030E560(func_0030E540(0) & 0xFF);
    Pes6Job_SetDone(arg0);
    return 1;
}
