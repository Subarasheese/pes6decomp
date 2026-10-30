/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
s32 func_00825610();                                /* extern */
s32 func_00832600();                                /* extern */
s64 func_0095DB00();                                /* extern */
s32 func_009F4980();                                /* extern */
s32 *func_009F4B30(s32);                            /* extern */
s32 func_009F7290();                                /* extern */

s32 func_009F6DA0(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    temp_s0 = *func_009F4B30(func_00985C70());
    if (func_00825610() != 6) {
        goto block_5;
    }
    if (temp_s0 == func_00832600()) {
        var_v0_2 = 0;
    } else {
block_5:
        var_v0_2 = 1;
    }
    if (var_v0_2 == 0) {
        temp_v0 = func_009F7290();
        if (temp_v0 <= 0) {
            var_v1 = 0;
        } else if (temp_v0 < (((u64) (func_0095DB00() << 0x20) >> 0x20) + 0x384)) {
            var_v1 = 0;
        } else {
            goto block_11;
        }
    } else {
block_11:
        var_v1 = 1;
    }
    if (var_v1 != 1) {
        return -1;
    }
    var_v0 = func_009F4980();
    if (var_v0 <= 0) {
        var_v0 = -1;
    }
    return var_v0;
}
