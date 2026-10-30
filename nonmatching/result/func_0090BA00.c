/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090BA00(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_a6;
    s32 var_a7;
    s32 var_t0;
    s32 var_t1;
    void *temp_a5;

    var_t1 = 0;
    var_t0 = 0;
    var_a7 = 0;
    do {
        temp_a6 = *(s32 *)0x923FC8;
        temp_a5 = temp_a6 + var_t0;
        if (M2C_FIELD(temp_a5, s32 *, 0x14) == arg0) {
            if (arg2 != 3) {
                M2C_FIELD(temp_a5, s32 *, 0x80) = 1;
            } else {
                M2C_FIELD((temp_a6 + var_a7), s32 *, 0x754) = -0x63;
            }
        }
        var_t1 += 1;
        var_t0 += 4;
        var_a7 += 0x69C;
    } while (var_t1 < 2);
    return 0;
}
