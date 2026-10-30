/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009AE7E0(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0);
    if (!(temp_f3 < 13412.0f)) {
        if (temp_f3 <= 13963.0f) {
            temp_f2 = M2C_FIELD(arg0, f32 *, 4);
            if (!(temp_f2 < -668.0f)) {
                temp_f1 = M2C_FIELD(arg0, f32 *, 8);
                if (temp_f1 <= 979.0f) {
                    if (!(temp_f1 < -979.0f)) {
                        if (!(temp_f3 <= 13934.0f)) {
                            if (temp_f2 < ((22.068966f * temp_f3) - 308148.97f)) {
                                return 0;
                            }
                            /* Duplicate return node #14. Try simplifying control flow for better match */
                            return 1;
                        }
                        return 1;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
