/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D08560(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x51C);
        if (arg0 == NULL) {
            return 0xA;
        }
        if (temp_v1 >= 0) {
            if (temp_v1 < 5) {
                return M2C_FIELD(((temp_v1 * 4) + arg0), s32 *, 4);
            }
            goto block_11;
        }
block_11:
        return 0xA;
    }
    return 0xA;
}
