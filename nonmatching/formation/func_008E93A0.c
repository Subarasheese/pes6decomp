/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008E93A0(void *arg0, void *arg1) {
    void *temp_a1;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 != NULL) {
        temp_a1 = (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + arg1;
        if (M2C_FIELD(temp_a1, u8 *, 0x822) == M2C_FIELD(arg0, u8 *, 1)) {
            return M2C_FIELD(temp_a1, u8 *, 0x824) != M2C_FIELD(arg0, u8 *, 2);
        }
        return 1;
    }
    return 0;
}
