/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0027B650(void *arg0) {
    f32 temp_f1;
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
    temp_f1 = M2C_FIELD(temp_v1, f32 *, 8);
    if (temp_f1 != 0.0f) {
        if (M2C_FIELD(temp_v1, s32 *, 4) != 0) {
            var_v0 = 1;
            if (temp_f1 < M2C_FIELD(temp_v1, f32 *, 0x10)) {
                return 0;
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = 0;
        return var_v0;
    }
    return 1;
}
