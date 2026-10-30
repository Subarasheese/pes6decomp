/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DC30;

void func_009BA9E0(s8 arg0) {
    if (D_00A7DC30 != NULL) {
        M2C_FIELD(D_00A7DC30, s8 *, 4) = arg0;
        M2C_FIELD(D_00A7DC30, s8 *, 3) = 0x63;
    }
}
