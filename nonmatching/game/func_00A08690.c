/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */

s32 func_00A08690(void *arg0) {
    s32 temp_v1_2;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_v1 != 0xC1) && (temp_v1 != 0x2E)) {
        temp_v1_2 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
        if ((temp_v1_2 >= 0x20) && (temp_v1_2 < 0x61)) {
            return 1;
        }
        return 0;
    }
    return 1;
}
