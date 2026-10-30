/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_009F4250(s32);                             /* extern */
void *func_009F4EB0(s32);                           /* extern */
void *func_009F4F10(s32);                           /* extern */

u16 func_009F9170(s32 arg0) {
    void *var_s0;
    void *var_s0_2;
    void *var_s2;

    var_s2 = NULL;
    var_s0 = func_009F4F10(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if ((var_s0 != NULL) && (arg0 >= 0) && ((u32) arg0 < (u32) M2C_FIELD(var_s0, u32 *, 4))) {
        var_s2 = var_s0 + (arg0 * 0x58) + 0xB8;
    }
    var_s0_2 = func_009F4EB0(func_00985C70());
    if ((var_s0_2 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0_2 = NULL;
    }
    if (var_s2 == NULL) {
        return 5U;
    }
    if (var_s0_2 != NULL) {
        if (M2C_FIELD(var_s0_2, u8 *, 1) == 5) {
            return M2C_FIELD(var_s2, u16 *, 0x20);
        }
        return 5U;
    }
    return 5U;
}
