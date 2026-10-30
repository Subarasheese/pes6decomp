/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223BA0(void);
u8 func_00220CB0(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00223BA0() + (arg0 * 0x54);
    if (1 == 0) {
        return M2C_FIELD(temp_v0, u8 *, 0x52);
    }
    return M2C_FIELD(temp_v0, u8 *, 0x53);
}
