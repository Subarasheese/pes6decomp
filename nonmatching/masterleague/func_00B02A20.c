/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00970870();                              /* extern */

s32 func_00B02A20(s32 arg0) {
    void *temp_v0;

    if (!(arg0 & 0xFFFF)) {
        return 0;
    }
    temp_v0 = func_00970870();
    if (temp_v0 != NULL) {
        return (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
    }
    return 0;
}
