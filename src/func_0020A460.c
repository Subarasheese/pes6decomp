/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00264F50(s32);                             /* extern */
s32 func_002655D0(s32, s32, s32);                   /* extern */

s32 func_0020A460(s32 arg0, s32 arg1, s32 arg2) {
    return func_002655D0(arg0, arg2, func_00264F50(arg1)) != 0;
}
