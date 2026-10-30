/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00970770();                              /* extern */

s32 func_00AF4C30(s32 arg0) {
    s32 temp_v1;
    void *temp_v0;

    temp_v1 = arg0 & 0xFFFF;
    if ((temp_v1 >= 0x11F5) && (temp_v1 < 0x12A6)) {
        return 0x11;
    }
    temp_v0 = func_00970770();
    if (temp_v0 != NULL) {
        return (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
    }
    return 0;
}
