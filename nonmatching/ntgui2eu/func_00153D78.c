/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00152548(s32);                         /* extern */

void func_00153D78(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    var_s0 = temp_v0;
    if (temp_v0 > 0) {
        var_s1 = 0;
        do {
            var_s0 -= 1;
            func_00152548(M2C_FIELD(arg0, s32 *, 0) + var_s1);
            var_s1 += 0x14;
        } while (var_s0 != 0);
    }
}
