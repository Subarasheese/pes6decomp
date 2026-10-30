/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_002BFD28)(M2C_UNK, s32);

void func_00107878(s32 arg0) {
    if (D_002BFD28 != NULL) {
        D_002BFD28(7, arg0);
    }
}
