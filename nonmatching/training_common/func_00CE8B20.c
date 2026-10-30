/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E7E28;

s32 func_00CE8B20(s32 arg0) {
    void *temp_v1;

    if (arg0 >= 0) {
        if (arg0 < 0xC) {
            temp_v1 = (arg0 * 4) + D_003E7E28;
            if (M2C_FIELD(temp_v1, s32 *, 0x68) >= 0) {
                return M2C_FIELD(temp_v1, s32 *, 0xE8);
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
