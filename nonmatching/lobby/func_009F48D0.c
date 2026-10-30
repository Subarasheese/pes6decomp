/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */

s32 func_009F48D0(s32 *arg0) {
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = func_00828160();
    if (temp_v0 != 0) {
        temp_a0 = *arg0;
        var_a2 = 0;
        if (temp_a0 > 0) {
            var_a1 = arg0;
loop_3:
            if (M2C_FIELD(var_a1, s32 *, 0x58) != temp_v0) {
                var_a2 += 1;
                var_a1 += 0x48;
                if (var_a2 >= temp_a0) {

                } else {
                    goto loop_3;
                }
            } else {
                var_s1 = M2C_FIELD(((var_a2 * 0x48) + arg0), s32 *, 0x54);
            }
        }
    }
    return var_s1;
}
