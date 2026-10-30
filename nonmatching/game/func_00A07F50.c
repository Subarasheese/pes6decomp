/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */

s32 func_00A07F50(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x16) != 0x10) {
        return 1;
    }
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x18) {
        return (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x18;
    }
    return 0;
}
