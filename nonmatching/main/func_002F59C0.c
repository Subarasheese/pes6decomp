/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002EF280(void *);
s32 func_002F59C0(void *arg0) {
    f32 temp_f1;

    if (arg0 != NULL) {
        if (func_002EF280(arg0 + 0x10) != 0) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xC) - 22.0f;
            M2C_FIELD(arg0, f32 *, 0xC) = temp_f1;
            if (temp_f1 < 0.0f) {
                M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
            }
            if (M2C_FIELD(arg0, f32 *, 0xC) != M2C_FIELD(arg0, f32 *, 8)) {
                return 1;
            }
            goto block_13;
        }
        goto block_13;
    }
block_13:
    return 0;
}
