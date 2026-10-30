/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_00948B40(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, u16 *, 0x17E);
    }
    return 0U;
}
