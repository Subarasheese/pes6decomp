/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_0012AD50(s32);                         /* extern */
M2C_UNK func_0012ADE0(s32);                         /* extern */
s32 func_0012C8A0(s32, s32);                        /* extern */
s32 func_0012D380(s32);                             /* extern */
M2C_UNK func_0012D4F0(s32, s32);                    /* extern */
s32 func_0012D640();                                /* extern */
extern s32 D_003E7410;

s32 func_0012DB20(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;

    var_s1 = arg0;
    func_0012AD50(D_003E7410);
    if (func_0012D380(var_s1) == 0) {
        var_s1 = func_0012D640();
    }
    temp_s0 = func_0012C8A0(var_s1, arg1);
    func_0012ADE0(D_003E7410);
    func_0012D4F0(var_s1, temp_s0);
    return temp_s0;
}
