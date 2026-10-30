/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK func_00215170;

s32 func_00214E40(void *arg0) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a4;
    s32 var_a5;

    var_a3 = M2C_FIELD(arg0, s32 **, 0xA8);
    var_a5 = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xAC);
    temp_a1 = *var_a3;
    var_a4 = 0;
    if (temp_a1 != temp_v1) {
        var_a2 = var_a3;
        do {
            var_a2 += 4;
            var_a5 += 1;
        } while (*var_a2 != temp_v1);
    }
    if (temp_a1 != &func_00215170) {
        do {
            var_a3 += 4;
            var_a4 += 1;
        } while (*var_a3 != &func_00215170);
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) + 1);
    return var_a4 - var_a5;
}
