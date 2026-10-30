/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

u16 func_00AEEEB0(s32 arg0) {
    s32 temp_v0;

    if (D_003EAD44 != NULL) {
        temp_v0 = arg0 & 0xFF;
        if (temp_v0 < (s32) M2C_FIELD(D_003EAD44, u8 *, 0x21CC)) {
            return M2C_FIELD(((temp_v0 * 2) + D_003EAD44), u16 *, 0x208A);
        }
        return 0U;
    }
    return 0U;
}
