/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_009F4250(s32);                             /* extern */
void *func_009F4F10(s32);                           /* extern */

s32 func_009F97D0(void) {
    void *var_s0;

    var_s0 = func_009F4F10(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        return M2C_FIELD(var_s0, s32 *, 4);
    }
    return -1;
}
