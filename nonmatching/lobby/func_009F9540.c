/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_009F4250(s32);                             /* extern */
void *func_009F4F10(s32);                           /* extern */

s32 func_009F9540(s32 arg0) {
    s32 *var_s2;
    void *var_s0;

    var_s2 = NULL;
    var_s0 = func_009F4F10(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if ((var_s0 != NULL) && (arg0 >= 0) && ((u32) arg0 < (u32) M2C_FIELD(var_s0, u32 *, 4))) {
        var_s2 = var_s0 + (arg0 * 0x58) + 0xB8;
    }
    if (var_s2 != NULL) {
        return *var_s2;
    }
    return -1;
}
