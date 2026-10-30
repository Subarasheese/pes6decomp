/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD50;

s32 func_009C24C0(s32 arg0) {
    if (D_00A7DD50 != NULL) {
        M2C_FIELD(D_00A7DD50, s32 *, 0x11BC) = arg0;
        return 1;
    }
    return 0;
}
