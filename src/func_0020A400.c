/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0021FB90(s32);                             /* extern */
s32 func_00264F50(s32);                             /* extern */
s32 func_002655D0(s32, s32, s32);                   /* extern */

s32 func_0020A400(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = func_00264F50(arg1);
    return func_002655D0(arg0, func_0021FB90(arg2), temp_s0) != 0;
}
