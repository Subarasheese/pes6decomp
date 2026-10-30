/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
u8 func_009846F0(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        return M2C_FIELD((((s32) (arg0 & 0xFF) % 2) + temp_v0), u8 *, 0x1541);
    }
    return 0U;
}
