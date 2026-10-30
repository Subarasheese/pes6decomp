/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCAE40[];

u8 func_00C17DC0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 < 2) {
        temp_v1 = arg1 & 0xFF;
        if (temp_v1 < 0x20) {
            return M2C_FIELD((temp_v1 + ((temp_v0 << 5) + ((void *)D_00CCAE40))), u8 *, 0x80);
        }
    }
    return 0xFFU;
}
