/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002EEA90(M2C_UNK);                         /* extern */
s32 func_00BA5350(s32, s32, s32, s32);              /* extern */

s32 func_00BA52C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_v0 = func_002EEA90(0);
block_6:
        if (var_v0 != 0x1CA) {
            return func_00BA5350(var_v0, arg0, arg1, arg2);
        }
        return 0x1CA;
    case 1:
        var_v0 = func_002EEA90(1);
        goto block_6;
    default:
        return 0x1CA;
    }
}
