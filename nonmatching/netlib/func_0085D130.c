/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00852320(void *);                      /* extern */

s32 func_0085D130(M2C_UNK arg0, void *arg1) {
    if (M2C_FIELD(arg1, u8 *, 2) == 2) {
        func_00852320(arg1);
    }
    return 0;
}
