/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B33F0();                                /* extern */

s32 func_00A3F850(void *arg0, u8 *arg1) {
    if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), func_009B33F0()) & 0xFFFF) < 0x21) && ((u32) M2C_FIELD(((*arg1 * 4) + arg0), u32 *, 0x158) < (u32) M2C_FIELD(arg0, u32 *, 0x110))) {
        return 1;
    }
    return 0;
}
