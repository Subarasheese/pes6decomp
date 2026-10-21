/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_0012AD50(s32);                         /* extern */
M2C_UNK func_0012ADE0(s32);                         /* extern */
s32 func_0012C200(s32, s32, s32);                   /* extern */
s32 func_0012D380(s32);                             /* extern */
M2C_UNK func_0012D4F0(s32, s32);                    /* extern */
s32 func_0012D640();                                /* extern */
extern s32 D_003E7410;

s32 func_0012D710(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_s2;

    var_s2 = arg0;
    func_0012AD50(D_003E7410);
    if (func_0012D380(var_s2) == 0) {
        var_s2 = func_0012D640();
    }
    temp_s0 = func_0012C200(var_s2, arg1, arg2);
    func_0012ADE0(D_003E7410);
    func_0012D4F0(var_s2, temp_s0);
    return temp_s0;
}
