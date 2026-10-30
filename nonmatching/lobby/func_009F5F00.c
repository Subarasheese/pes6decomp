/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_00832600();                                /* extern */
s64 func_0095DB00();                                /* extern */
s32 func_00985C70();                                /* extern */
s32 func_009F4250(s32);                             /* extern */
s32 func_009F4980();                                /* extern */
s32 *func_009F4B30(s32);                            /* extern */
void *func_009F4B90(s32);                           /* extern */
s32 func_009F7290();                                /* extern */

s32 func_009F5F00(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    void *var_s0;

    var_s0 = func_009F4B90(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        temp_s0 = M2C_FIELD(var_s0, s32 *, 0x80);
        if (temp_s0 <= 0) {
            return -1;
        }
        temp_s1 = *func_009F4B30(func_00985C70());
        if (func_00825610() != 6) {
            goto block_14;
        }
        if (temp_s1 == func_00832600()) {
            var_v0_2 = 0;
        } else {
block_14:
            var_v0_2 = 1;
        }
        if (var_v0_2 == 0) {
            temp_v0 = func_009F7290();
            if (temp_v0 <= 0) {
                var_v1 = 0;
            } else if (temp_v0 < (((u64) (func_0095DB00() << 0x20) >> 0x20) + 0x384)) {
                var_v1 = 0;
            } else {
                goto block_20;
            }
        } else {
block_20:
            var_v1 = 1;
        }
        if (var_v1 != 1) {
            goto block_24;
        }
        var_v0_3 = func_009F4980();
        if (var_v0_3 <= 0) {
block_24:
            var_v0_3 = -1;
        }
        var_v0 = var_v0_3 - temp_s0;
        if (var_v0 >= 0) {
            if (var_v0 >= 0x64) {
                var_v0 = -1;
            }
            return var_v0;
        }
        return -1;
    }
    return -1;
}
