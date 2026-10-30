/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008E6FA0(void *arg0) {
    s32 (*temp_v1)(s32, u8, s32);

    if ((M2C_FIELD(arg0, u8 *, 1) != 0) && (M2C_FIELD((M2C_FIELD(arg0, u8 *, 2) + arg0), u8 *, 5) == 0)) {
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, s32 (**)(s32, u8, s32), 0x4C);
    if (temp_v1 == NULL) {
        return 1;
    }
    return temp_v1(M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(((M2C_FIELD(arg0, u8 *, 2) * 4) + arg0), s32 *, 0x14));
}
