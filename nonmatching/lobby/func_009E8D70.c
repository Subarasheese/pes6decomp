/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009ECE90(s32, s32 *, s32, s32, s32, s32, s32); /* extern */

s32 func_009E8D70(void *arg0, s32 arg1) {
    s32 sp4C;
    s32 temp_a6;
    s32 var_s1;

    temp_a6 = arg0 + 0x70;
    var_s1 = 0;
    if (func_009ECE90(temp_a6 + 4, &sp4C, arg1, M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x38) >= 0, M2C_FIELD(arg0, u8 *, 0x5D) != 0, temp_a6) == 1) {
        switch (sp4C) {                             /* irregular */
        case -2:
            var_s1 = 3;
            break;
        case -1:
            var_s1 = 1;
            break;
        default:
            M2C_FIELD(arg0, s32 *, 0x44) = sp4C;
            var_s1 = 2;
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            M2C_FIELD((arg0 + 0x10), s32 *, 0x38) = 0;
            break;
        }
    }
    return var_s1;
}
