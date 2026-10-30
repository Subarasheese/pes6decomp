/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(void *, void *);                  /* extern */

s32 func_00877740(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            if (M2C_FIELD(arg1, s32 *, 0) != 0) {
                if (M2C_FIELD(arg0, s8 *, 0x7D) == 3) {
                    return -1;
                }
                if (M2C_FIELD(arg1, s8 *, 0x7D) != 3) {
                    temp_v0 = func_001C7E10(arg0 + 4, arg1 + 4);
                    if (temp_v0 < 0) {
                        return -1;
                    }
                    return temp_v0 > 0;
                }
                return 1;
            }
            return -(temp_v1 != 0);
        }
        return M2C_FIELD(arg1, s32 *, 0) != 0;
    }
    return 0;
}
