/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF8E0(s32, s32);                    /* extern */

void func_009A87E0(s32 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_002DF8E0(*arg0, arg1 & 0xFF);
    }
}
