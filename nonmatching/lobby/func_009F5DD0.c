/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_009F4250(s32);                             /* extern */
void *func_009F4B90(s32);                           /* extern */

s32 func_009F5DD0(s32 arg0) {
    u32 temp_v1;
    void *var_s0;
    void *var_s1;
    void *var_s3;

    var_s1 = func_009F4B90(func_00985C70());
    if ((var_s1 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s1 = NULL;
    }
    var_s3 = NULL;
    var_s0 = func_009F4B90(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if ((var_s0 != NULL) && (arg0 >= 0) && ((u32) arg0 < (u32) M2C_FIELD(var_s0, u32 *, 4))) {
        var_s3 = var_s0 + (arg0 * 0x58) + 0x70;
    }
    if (var_s1 == NULL) {
        return 0;
    }
    if (var_s3 != NULL) {
        temp_v1 = M2C_FIELD(var_s3, u32 *, 0x10);
        if (temp_v1 != 1) {
            if ((u32) M2C_FIELD(var_s1, u32 *, 0x2C) < temp_v1) {
                return 0;
            }
            return 2;
        }
        return 1;
    }
    return 0;
}
