/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_00832600();                                /* extern */
s64 func_0095DB00();                                /* extern */
s32 func_00985C70();                                /* extern */
s32 func_009F4250(s32);                             /* extern */
s32 *func_009F4B30(s32);                            /* extern */
void *func_009F4B90(s32);                           /* extern */
s32 func_009F7290();                                /* extern */

s32 func_009F6060(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    void *var_s0;

    var_s0 = func_009F4B90(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        return -1;
    }
    temp_s1 = *func_009F4B30(func_00985C70());
    if (func_00825610() != 6) {
        goto block_10;
    }
    if (temp_s1 == func_00832600()) {
        var_v0 = 0;
    } else {
block_10:
        var_v0 = 1;
    }
    if (var_v0 == 0) {
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
        return M2C_FIELD(var_s0, s32 *, 4);
    }
    return 0;
}
