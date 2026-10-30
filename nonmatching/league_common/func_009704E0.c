/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 *func_00224E20(s32, s32);                       /* extern */

s32 func_009704E0(s32 arg0) {
    s32 var_s0;
    u16 *temp_v0;

    if ((arg0 & 0xFF) >= 0x50) {
        goto block_7;
    }
    var_s0 = 0;
loop_3:
    temp_v0 = func_00224E20(arg0, var_s0 & 0xFF);
    if ((temp_v0 != NULL) && (*temp_v0 == 0)) {
        return var_s0 & 0xFF;
    }
    var_s0 += 1;
    if (var_s0 >= 0x20) {
block_7:
        return 0xFF;
    }
    goto loop_3;
}
