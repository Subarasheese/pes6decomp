/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD50;

s8 func_009C2520(void) {
    if (D_00A7DD50 != NULL) {
        return M2C_FIELD(D_00A7DD50, s8 *, 0x11A1);
    }
    return 0;
}
