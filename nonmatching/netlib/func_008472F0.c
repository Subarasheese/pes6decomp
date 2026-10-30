/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA2B4;

s32 func_008472F0(s32 arg0, M2C_UNK (*arg1)()) {
    if (arg1 != NULL) {
        arg1();
    }
    D_003EA2B4 = arg0;
    return 0;
}
