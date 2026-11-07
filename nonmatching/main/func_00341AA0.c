/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_003119B0(u8 *);                        /* extern */
s32 func_00311BA0(s32);                             /* extern */

s32 func_00341AA0(s32 *arg0) {
    u8 sp4F;
    s32 var_s0;
    s32 var_s1;

    func_003119B0(&sp4F);
    var_s1 = 0;
    var_s0 = 0;
    do {
        if (func_00311BA0(sp4F + var_s1) != 0) {
            var_s0 += 1;
        }
        var_s1 += 1;
    } while (var_s1 < 0xB);
    *arg0 = var_s0;
    return 1;
}
