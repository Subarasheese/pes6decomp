/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00520220;

void func_001901C0(s8 arg0, s8 arg1) {
    if (D_00520220 != NULL) {
        M2C_FIELD(D_00520220, s8 *, 1) = arg0;
        M2C_FIELD(D_00520220, s8 *, 2) = arg1;
    }
}
