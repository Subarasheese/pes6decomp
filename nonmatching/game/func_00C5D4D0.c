/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
void *func_00C13280(void *);                        /* extern */
u32 func_00C13740(u32, M2C_UNK);                    /* extern */
s32 func_00C13840();                                /* extern */

s32 func_00C5D4D0(u32 arg0, u32 arg1, s32 arg2) {
    s32 var_s2;
    u32 var_s1;

    var_s2 = 0;
    if ((arg0 != -1U) && (arg1 != -1U) && (arg0 != func_00C13840())) {
        var_s1 = func_00C13740(func_00C137B0(arg0), 0xF);
        if (arg1 >= var_s1) {
loop_5:
            if (((arg2 & 0xFF) == (func_00C132B0((void *) var_s1) & 0xFF)) && (M2C_FIELD(func_00C13280((void *) var_s1), u8 *, 4) & 1)) {
                var_s2 = 1;
            } else {
                var_s1 = func_00C13740(var_s1, 0xF);
                if (arg1 >= var_s1) {
                    goto loop_5;
                }
            }
        }
    }
    return var_s2;
}
