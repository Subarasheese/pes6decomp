/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00190260(s32);                             /* extern */
M2C_UNK func_00190370(u32);                         /* extern */
M2C_UNK func_001907F8(s32, s32, M2C_UNK);           /* extern */

u32 func_00190490(u32 arg0, s32 arg1) {
    u32 temp_a0;
    u32 temp_s0;
    u32 temp_s1;
    u32 var_s2;
    u32 var_v0;

    var_s2 = func_00190260(arg1 + arg0 + 1);
    var_v0 = 0;
    if (!(arg0 & 3)) {
        if (var_s2 != 0) {
            temp_a0 = arg0 - (var_s2 % arg0);
            if (temp_a0 != 0) {
                temp_s0 = temp_a0 >> 2;
                temp_s1 = var_s2 + temp_a0;
                func_001907F8(temp_s1 - 4, (M2C_FIELD(var_s2, s32 *, -4) & 0x7FFFFFFF) - temp_s0, 1);
                func_001907F8(var_s2 - 4, temp_s0 - 1, 0);
                func_00190370(var_s2);
                var_s2 = temp_s1;
            }
            var_v0 = var_s2;
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_v0;
        }
        return 0U;
    }
    return var_v0;
}
