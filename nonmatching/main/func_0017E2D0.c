/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0017B070(s32);                         /* extern */
M2C_UNK func_0017C3B0(s32);                         /* extern */

void func_0017E2D0(s32 *arg0, s32 *arg1) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    if (*arg1 > 0) {
        var_s0 = arg0;
        do {
            temp_a0 = *var_s0;
            if (temp_a0 != 0) {
                func_0017B070(temp_a0);
                func_0017C3B0(*var_s0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < *arg1);
    }
}
