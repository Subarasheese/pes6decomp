/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

void func_00B0C790(s16 arg0) {
    if (D_003EAD68 != NULL) {
        M2C_FIELD(D_003EAD68, s16 *, 0x13C2) = arg0;
    }
}
