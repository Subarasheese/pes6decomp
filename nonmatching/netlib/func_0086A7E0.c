/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0086A7E0(void *arg0, void *arg1) {
    s32 temp_v1;
    u8 temp_a1;
    u8 temp_v1_2;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            if (M2C_FIELD(arg1, s32 *, 0) != 0) {
                if (M2C_FIELD(arg0, u8 *, 0xB6) != 0) {
                    return -1;
                }
                if (M2C_FIELD(arg1, u8 *, 0xB6) != 0) {
                    return 1;
                }
                temp_a1 = M2C_FIELD(arg1, u8 *, 0x35);
                temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x35);
                if ((s32) temp_v1_2 < (s32) temp_a1) {
                    return -1;
                }
                return (s32) temp_a1 < (s32) temp_v1_2;
            }
            return -(temp_v1 != 0);
        }
        return M2C_FIELD(arg1, s32 *, 0) != 0;
    }
    return 0;
}
