/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008B2FF0(u8);                              /* extern */

u8 func_008D4F10(u8 *arg0) {
    return M2C_FIELD((func_008B2FF0(*arg0) + arg0), u8 *, 5);
}
