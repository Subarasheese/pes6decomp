/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00BD6D70();                              /* extern */

u8 func_00BD6D50(void) {
    return M2C_FIELD(func_00BD6D70(), u8 *, 0x20);
}
