/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001F7380(void *arg0, s32 arg1) {
    f32 var_f0;
    s32 temp_a0;
    void *temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x14);
        temp_a0 = arg1 & 0xFFFF;
        if (temp_a0 < (s32) M2C_FIELD(temp_v1, u8 *, 1)) {
            var_f0 = (f32) -M2C_FIELD(((temp_a0 * 0x1E) + M2C_FIELD(temp_v1, s32 *, 8)), s16 *, 8);
        } else {
            var_f0 = 0.0f;
        }
        return var_f0;
    }
    return 0.0f;
}
