/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 div(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 temp_hi;
    s32 var_v0;
    s32 var_v1;

    temp_hi = arg0 % arg1;
    var_v0 = arg0 / arg1;
    sp0 = var_v0;
    sp4 = temp_hi;
    if (arg0 >= 0) {
        if (temp_hi < 0) {
            var_v1 = temp_hi - arg1;
            var_v0 += 1;
            goto block_5;
        }
    } else if (temp_hi > 0) {
        var_v1 = temp_hi + arg1;
        var_v0 -= 1;
block_5:
        sp0 = var_v0;
        sp4 = var_v1;
    }
    return (((var_v0 & (-1 << 0x20)) | (u32) sp0) & (0xFFFF0000U >> 0x20)) | ((s64) (u32) sp4 << 0x20);
}
