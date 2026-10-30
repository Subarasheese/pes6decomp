/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

u16 func_00B0C7B0(s32 arg0) {
    s32 temp_v0;

    if (D_003EAD68 != NULL) {
        temp_v0 = arg0 & 0xFF;
        if (temp_v0 < (s32) M2C_FIELD(D_003EAD68, u8 *, 0xE05)) {
            return M2C_FIELD(((temp_v0 * 2) + D_003EAD68), u16 *, 0x1380);
        }
        return 0U;
    }
    return 0U;
}
