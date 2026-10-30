/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
void *func_009F41A0(s32);                           /* extern */
s32 func_009F4250(s32);                             /* extern */

s32 func_009F5780(s32 arg0) {
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    void *var_s0_2;
    void *var_s3;
    void *var_s4;

    var_s0_2 = func_009F41A0(func_00985C70());
    if ((var_s0_2 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0_2 = NULL;
    }
    if (var_s0_2 != NULL) {
        var_v0 = M2C_FIELD(var_s0_2, s32 *, 4);
    } else {
        var_v0 = -1;
    }
    var_s0 = var_v0 - 1;
    if (var_s0 >= 0) {
        var_s2 = var_s0 * 0x48;
loop_9:
        var_s4 = NULL;
        var_s3 = func_009F41A0(func_00985C70());
        if ((var_s3 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
            var_s3 = NULL;
        }
        if ((var_s3 != NULL) && (var_s0 >= 0) && ((u32) var_s0 < (u32) M2C_FIELD(var_s3, u32 *, 4))) {
            var_s4 = var_s3 + var_s2 + 0x4C;
        }
        if (var_s4 != NULL) {
            var_v0_2 = M2C_FIELD(var_s4, s32 *, 0xC);
        } else {
            var_v0_2 = 0;
        }
        if (arg0 != var_v0_2) {
            var_s0 -= 1;
            var_s2 -= 0x48;
            if (var_s0 >= 0) {
                goto loop_9;
            }
        }
    }
    return var_s0;
}
