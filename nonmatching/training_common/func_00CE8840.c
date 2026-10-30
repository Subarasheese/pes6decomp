/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
M2C_UNK func_00CE7D70();                            /* extern */

void func_00CE8840(void) {
    if (func_00CE4310() != 0) {
        func_00CE7D70();
        func_00CD7A00(2);
    }
}
