/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_00824800();                                /* extern */

s32 func_009537A0(s64 arg0) {
    s32 var_s0;
    s64 temp_a0;
    s64 temp_a1;
    s64 temp_v1;

    var_s0 = 0;
    temp_a1 = (s64) (arg0 << 0x38) >> 0x38;
    temp_v1 = (s64) (func_00824800() << 0x38) >> 0x38;
    if (((s64) ((temp_a1 & 0x20) << 0x38) >> 0x38) != 0) {
        return 1;
    }
    temp_a0 = (s64) (temp_v1 << 0x38) >> 0x38;
    switch (temp_a0) {                              /* irregular */
    case 0:
        if (((s64) ((temp_a1 & 1) << 0x38) >> 0x38) != 0) {
            var_s0 = 1;
        }
        break;
    case 1:
        if (((s64) ((temp_a1 & 2) << 0x38) >> 0x38) != 0) {
            var_s0 = 1;
        }
        break;
    case 2:
        if (((s64) ((temp_a1 & 4) << 0x38) >> 0x38) != 0) {
            var_s0 = 1;
        }
        break;
    case 3:
        if (((s64) ((temp_a1 & 8) << 0x38) >> 0x38) != 0) {
            var_s0 = 1;
        }
        break;
    case 4:
        if (((s64) ((temp_a1 & 0x10) << 0x38) >> 0x38) != 0) {
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
