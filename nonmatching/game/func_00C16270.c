/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C16270(void *arg0) {
    s32 temp_a4;
    s32 var_a5;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0);
    var_a5 = 0;
loop_1:
    switch (temp_a4) {                              /* irregular */
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x20) == 8) {
        case 0:
            return 0;
        }
        if ((temp_a4 == 0xB) && ((u32) ((u8) M2C_FIELD(arg0, s32 *, 0x20) - 1) < 2U)) {
            return 1;
        }
    default:
        var_a5 += 1;
        if (var_a5 >= 0xA) {
            return 0;
        }
        goto loop_1;
    }
}
