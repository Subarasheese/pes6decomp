/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
u8 func_00994A10(s32 arg0) {
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 < 0x48) {
            return M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x33E68);
        }
        return 0U;
    }
    return 0U;
}
