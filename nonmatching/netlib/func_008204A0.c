/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827DB0(s32);                             /* extern */
s32 func_00827F60(s32);                             /* extern */
s32 func_00828050(s32);                             /* extern */
s32 func_00828160();                                /* extern */
s64 func_00841B80();                                /* extern */

s32 func_008204A0(s32 arg0) {
    s32 var_s0;
    s64 temp_v1;

    var_s0 = 0;
    if (arg0 == 0) {
        return 0xA;
    }
    temp_v1 = (s64) (func_00841B80() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 3:
        return 8;
    case 2:
        return 7;
    case 1:
        return 6;
    default:
    case 0:
        if (arg0 != func_00828160()) {
            if (func_00827DB0(arg0) == 1) {
                var_s0 = 5;
            }
            if ((func_00828050(arg0) == 1) && (var_s0 != 5)) {
                var_s0 = 3;
            }
            if (func_00827F60(arg0) == 1) {
                var_s0 = 4;
            }
            return var_s0;
        }
        return 2;
    }
}
