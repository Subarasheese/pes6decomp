/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00155A00();                            /* extern */
M2C_UNK func_00155A10();                            /* extern */
s32 func_0015DE78(s32);                             /* extern */

s32 func_00180FE0(s32 arg0) {
    s32 temp_s0;

    func_00155A10();
    temp_s0 = func_0015DE78(arg0);
    func_00155A00();
    return temp_s0;
}
