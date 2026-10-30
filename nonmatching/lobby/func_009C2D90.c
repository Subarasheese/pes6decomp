/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD50;

void func_009C2D90(void) {
    if (D_00A7DD50 != NULL) {
        M2C_FIELD(D_00A7DD50, s8 *, 4) = 4;
        M2C_FIELD(D_00A7DD50, s8 *, 0x11A4) = 2;
    }
}
