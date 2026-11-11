/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */

s32 func_00C99C50(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = arg0;
    if (arg1 > 2) {
        var_s0 = (s32) (arg2 + (arg0 + arg1)) % arg1;
    } else {
        switch (arg2) {                             /* irregular */
        case -1:
            var_s0 = 0;
            break;
        case 1:
            var_s0 = 1;
            break;
        }
    }
    if (var_s0 != arg0) {
        SD_call(0x8400F802);
    }
    return var_s0;
}
