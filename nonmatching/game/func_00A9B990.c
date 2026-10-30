/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBA70(u8);                              /* extern */

u32 func_00A9B990(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x124) >= (u32) M2C_FIELD((((func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) * 4) + arg0), u32 *, 0x158)) {
        return M2C_FIELD((((func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) * 4) + arg0), u32 *, 0x158);
    }
    return M2C_FIELD(arg0, u32 *, 0x124);
}
