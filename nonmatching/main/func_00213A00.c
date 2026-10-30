/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);                             /* extern */
M2C_UNK func_00213F20(s32, s32 *, s32, s32);        /* extern */

void func_00213A00(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 sp80;
    s32 *var_s4;
    s32 *var_s5;
    s32 var_s3;
    s32 var_s6;

    if (arg3 >= 0xC) {
        var_s3 = 0xB;
    } else if (arg3 >= 0) {
        var_s3 = arg3;
    } else {
        var_s3 = 0;
    }
    var_s6 = 0;
    if (var_s3 > 0) {
        var_s5 = arg1;
        var_s4 = &sp80;
        do {
            *var_s4 = func_001F08B0(*var_s5);
            var_s6 += 1;
            var_s5 += 4;
            var_s4 += 4;
        } while (var_s6 < var_s3);
    }
    func_00213F20(arg0, &sp80, arg2, arg3);
}
