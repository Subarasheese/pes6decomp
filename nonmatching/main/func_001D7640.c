/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001D7640(void *arg0) {
    f32 temp_f1;
    s32 var_v0;

    if (arg0 != NULL) {
        temp_f1 = 255.0f * M2C_FIELD(arg0, f32 *, 0x68);
        if (temp_f1 >= 2.1474836e9f) {
            var_v0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_v0 = (s32) temp_f1;
        }
        return var_v0 & 0xFF;
    }
    return 0xFF;
}
