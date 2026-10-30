/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008469B0(M2C_UNK);                     /* extern */

void func_00859460(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0xFD) != 0) {
        func_008469B0(0);
        M2C_FIELD(arg0, s8 *, 0xFE) = 1;
    }
}
