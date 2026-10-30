/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

u16 func_00B0C430(s32 arg0, s32 arg1) {
    s32 temp_a0;

    if (D_003EAD68 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 < (s32) M2C_FIELD(D_003EAD68, u8 *, 0xDF8)) {
            if (temp_a0 < 0x14) {
                return M2C_FIELD(((((arg1 & 0xFF) + (temp_a0 * 0x14)) * 2) + D_003EAD68), u16 *, 0x1330);
            }
            return 0xFFFFU;
        }
        return 0xFFFFU;
    }
    return 0xFFFFU;
}
