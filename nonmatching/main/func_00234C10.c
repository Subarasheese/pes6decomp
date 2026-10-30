/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s8 *func_00234C90(s32, s32, s32);                   /* extern */

void func_00234C10(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s8 *temp_v0;
    s8 var_s0;

    var_s0 = arg3;
    if (func_00231240() != 1) {
        temp_v0 = func_00234C90(arg0, arg1, arg2);
        if ((var_s0 & 0xFF) >= 0xFF) {
            var_s0 = 0xFE;
        }
        *temp_v0 = var_s0;
    }
}
