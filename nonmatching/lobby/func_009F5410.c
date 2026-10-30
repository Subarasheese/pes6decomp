/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
void *func_009F41A0(s32);                           /* extern */
s32 func_009F4250(s32);                             /* extern */

u16 func_009F5410(s32 arg0) {
    u16 *var_s1;
    void *var_s0;

    var_s1 = NULL;
    var_s0 = func_009F41A0(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if ((var_s0 != NULL) && (arg0 >= 0) && ((u32) arg0 < (u32) M2C_FIELD(var_s0, u32 *, 4))) {
        var_s1 = var_s0 + (arg0 * 0x48) + 0x4C;
    }
    if (var_s1 == NULL) {
        return 0U;
    }
    return *var_s1;
}
