/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DC980(s32);                         /* extern */

void func_008BFB90(void *arg0) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        if (M2C_FIELD((arg0 + var_s1), u8 *, 0x2D4) != 0) {
            func_001DC980(M2C_FIELD(var_s0, s32 *, 0x254));
            M2C_FIELD(var_s0, s32 *, 0x254) = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0x20);
}
