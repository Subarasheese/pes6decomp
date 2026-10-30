/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009ECE90(void *, s32 *, s32, s32, s32, s32, void *); /* extern */

s32 func_009E8E10(void *arg0, s32 arg1, s32 arg2, s32 (*arg3)(void *, s32)) {
    s32 sp5C;
    s32 temp_v0;
    s32 var_s1;
    void *temp_a6;

    temp_a6 = arg0 + 0x70;
    var_s1 = 0;
    if (func_009ECE90(temp_a6 + 4, &sp5C, arg1, arg2, M2C_FIELD(arg0, s32 *, 0x38) >= 0, M2C_FIELD(arg0, u8 *, 0x5D) != 0, temp_a6) == 1) {
        switch (sp5C) {                             /* irregular */
        case -2:
            var_s1 = 3;
            break;
        case -1:
            var_s1 = 1;
            break;
        default:
            temp_v0 = arg3(arg0, sp5C);
            M2C_FIELD((arg0 + 0x10), s32 *, 0x38) = 0;
            var_s1 = temp_v0;
            break;
        }
    }
    return var_s1;
}
