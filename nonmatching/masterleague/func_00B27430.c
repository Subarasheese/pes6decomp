/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
u8 func_00B27430(void) {
    return M2C_FIELD(func_00228960(), u8 *, 0x58);
}
