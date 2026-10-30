/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_009F4250(s32);                             /* extern */
void *func_009F4B90(s32);                           /* extern */

s32 func_009F6CC0(void) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = func_009F4B90(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        var_s1 = M2C_FIELD(var_s0, s32 *, 0x2C);
    }
    return var_s1;
}
