/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0012D8E0(s32);                         /* extern */
s32 func_0012DBA0(s32);                             /* extern */
M2C_UNK func_001C4730(s32, s32, s32);               /* extern */

s32 func_00154000(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = func_0012DBA0(arg1);
    if (arg0 != 0) {
        func_001C4730(temp_s0, arg0, arg1);
        func_0012D8E0(arg0);
    }
    return temp_s0;
}
