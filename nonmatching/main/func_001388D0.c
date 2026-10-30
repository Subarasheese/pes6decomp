/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001388D0(void *arg0) {
    s32 temp_a1;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x10);
        return M2C_FIELD(arg0, s32 *, 4) + (((s32) (temp_a1 + (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0xC))) % temp_a1) * 0x3C440);
    }
    return 0;
}
