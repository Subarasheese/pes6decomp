/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
s32 func_00BE8C90();                                /* extern */
extern M2C_UNK func_00BE52A0;

s32 func_00BE4FF0(M2C_UNK **arg0) {
    if (func_00BE8C90() != 0) {
        *arg0 = &func_00BE52A0;
        func_00B91440(0x27);
    }
    return 0;
}
