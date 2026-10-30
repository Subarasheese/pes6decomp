/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00125D20(s32, s32, s32, s32);          /* extern */
s32 func_00135080(s32);                             /* extern */

void func_00135A88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;

    var_s6 = 0;
    var_s5 = 0;
    var_s4 = 0;
    var_s3 = 0;
    if (arg0 != 0) {
        var_s3 = func_00135080(arg0 + 1);
    }
    if (arg1 != 0) {
        var_s4 = func_00135080(arg1 + 1);
    }
    if (arg2 != 0) {
        var_s5 = func_00135080(arg2 + 1);
    }
    if (arg3 != 0) {
        var_s6 = func_00135080(arg3 + 1);
    }
    func_00125D20(var_s3, var_s4, var_s5, var_s6);
}
