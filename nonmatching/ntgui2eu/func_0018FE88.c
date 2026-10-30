/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018C6D8();                                /* extern */
M2C_UNK func_0018F5A0(s32);                         /* extern */
M2C_UNK func_0018F728();                            /* extern */
M2C_UNK func_0018F738(s32);                         /* extern */
M2C_UNK func_0018F910();                            /* extern */
M2C_UNK func_0018F920(s32);                         /* extern */
M2C_UNK func_0018FA90();                            /* extern */
M2C_UNK func_0018FBF8();                            /* extern */

s32 func_0018FE88(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s4;

    temp_s2 = arg2 & 1;
    if (temp_s2 != 0) {
        var_s4 = arg1;
        func_0018F5A0(arg1);
    } else {
        var_s4 = arg0;
        func_0018F5A0(arg0);
    }
    func_0018FBF8();
    func_0018F728();
    func_0018FA90();
    func_0018F910();
    if ((temp_s2 & (func_0018C6D8() == 0)) || ((temp_v0 = func_0018C6D8() & 1, (temp_s2 == 0)) && (temp_v0 != 0))) {
        func_0018F738(arg0);
        func_0018F920(arg0);
    } else {
        func_0018F738(arg1);
        func_0018F920(arg1);
    }
    return var_s4;
}
