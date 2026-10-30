/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCAE40[];

u8 func_00C17D70(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 < 2) {
        temp_v1 = arg1 & 0xFF;
        if (temp_v1 < 0x12) {
            return M2C_FIELD((temp_v1 + ((temp_a0 * 0x12) + ((void *)D_00CCAE40))), u8 *, 0xC0);
        }
    }
    return 0xFFU;
}
