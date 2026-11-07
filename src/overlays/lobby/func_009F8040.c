/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_009F4250(s32);                             /* extern */
void *func_009F4CD0(s32);                           /* extern */

s32 func_009F8040(void) {
    void *var_s0;

    var_s0 = func_009F4CD0(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        return -1;
    }
    return M2C_FIELD(var_s0, s32 *, 8);
}
