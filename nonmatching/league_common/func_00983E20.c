/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
u8 func_00983E20(s32 arg0) {
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = func_00229460();
    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= 8) {
        return 0U;
    }
    if (temp_v0 != NULL) {
        return M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x4616);
    }
    return 0U;
}
