/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00290B80(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;

    var_a0 = arg0;
    temp_v1 = arg1 & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        break;
    case 2:
        if ((var_a0 & 0xFF) < 0x32) {
            var_a0 = 0;
        } else {
            var_v0 = var_a0 - 0x32;
block_14:
            var_a0 = var_v0 & 0xFF;
        }
        break;
    case 0:
        if (1 >= 0x32) {
            var_a0 = 0x63;
        } else {
            var_v0 = var_a0 + 0x32;
            goto block_14;
        }
        break;
    }
    if ((var_a0 & 0xFF) >= 0x64) {
        var_a0 = 0x63;
    }
    return var_a0;
}
