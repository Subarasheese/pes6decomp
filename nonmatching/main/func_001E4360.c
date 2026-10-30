/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001E4360(void *arg0, s32 arg1) {
    s32 *var_a2;

    M2C_FIELD(arg0, s8 *, 0x10) = 1;
    var_a2 = M2C_FIELD(arg0, s32 **, 4);
loop_1:
    if (M2C_FIELD(var_a2, s32 *, 0) != arg1) {
        var_a2 += 8;
        if (*var_a2 == -1) {
            return 0.0f;
        }
        goto loop_1;
    }
    return M2C_FIELD(var_a2, f32 *, 4) * M2C_FIELD(arg0, f32 *, 8);
}
