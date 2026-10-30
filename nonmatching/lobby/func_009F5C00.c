/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_00825610();                                /* extern */
s32 func_00832600();                                /* extern */
s64 func_0095DB00();                                /* extern */
s32 func_009F4250(s32);                             /* extern */
s32 *func_009F4B30(s32);                            /* extern */
void *func_009F4B90(s32);                           /* extern */
s32 func_009F7290();                                /* extern */

s32 func_009F5C00(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    void *var_s0_2;
    void *var_s3;
    void *var_s4;

    var_s0_2 = func_009F4B90(func_00985C70());
    if ((var_s0_2 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0_2 = NULL;
    }
    if (var_s0_2 == NULL) {
        var_v0 = -1;
    } else {
        temp_s2 = *func_009F4B30(func_00985C70());
        if (func_00825610() != 6) {
            goto block_10;
        }
        if (temp_s2 == func_00832600()) {
            var_v0_2 = 0;
        } else {
block_10:
            var_v0_2 = 1;
        }
        if (var_v0_2 == 0) {
            temp_v0 = func_009F7290();
            if (temp_v0 <= 0) {
                var_v1 = 0;
            } else if (temp_v0 < (((u64) (func_0095DB00() << 0x20) >> 0x20) + 0x384)) {
                var_v1 = 0;
            } else {
                goto block_16;
            }
        } else {
block_16:
            var_v1 = 1;
        }
        if (var_v1 == 1) {
            var_v0 = M2C_FIELD(var_s0_2, s32 *, 4);
        } else {
            var_v0 = 0;
        }
    }
    var_s0 = var_v0 - 1;
    if (var_s0 >= 0) {
        var_s2 = var_s0 * 0x58;
loop_23:
        var_s4 = NULL;
        var_s3 = func_009F4B90(func_00985C70());
        if ((var_s3 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
            var_s3 = NULL;
        }
        if ((var_s3 != NULL) && (var_s0 >= 0) && ((u32) var_s0 < (u32) M2C_FIELD(var_s3, u32 *, 4))) {
            var_s4 = var_s3 + var_s2 + 0x70;
        }
        if (var_s4 != NULL) {
            var_v0_3 = M2C_FIELD(var_s4, s32 *, 0x20);
        } else {
            var_v0_3 = 0;
        }
        if (arg0 != var_v0_3) {
            var_s0 -= 1;
            var_s2 -= 0x58;
            if (var_s0 >= 0) {
                goto loop_23;
            }
        }
    }
    return var_s0;
}
