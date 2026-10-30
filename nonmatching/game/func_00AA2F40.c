/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBA70(u8);                              /* extern */

s32 func_00AA2F40(u8 *arg0) {
    return M2C_FIELD((((func_00AFBA70(*arg0) & 0xFF) * 4) + arg0), s32 *, 0x158);
}
