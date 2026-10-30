/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */

void func_001A90F0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    if (arg0 > 0) {
        var_s0 = arg1;
        do {
            temp_v0 = func_001454C0(*var_s0);
            if (temp_v0 != 0) {
                func_00145590(temp_v0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < arg0);
    }
    func_00153FA0(*arg2);
}
