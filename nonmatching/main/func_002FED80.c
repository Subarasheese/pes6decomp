/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_002D4C40(s32);                         /* extern */
s32 func_00BD97D0();                                /* extern */
extern M2C_UNK func_002FED20;

s32 func_002FED80(void *arg0) {
    s32 var_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    if (func_00BD97D0() != 0) {
        if (func_00151EA0(2) == 0) {
            var_a0 = 6;
        } else {
            var_a0 = 5;
        }
        M2C_FIELD(temp_s0, s32 *, 0x18) = var_a0;
        func_002D4C40(var_a0);
        func_00305E60(arg0, (s32) &func_002FED20);
        return 1;
    }
    return 0;
}
