/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E5200(u8);                          /* extern */

void func_008E55C0(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x1DB) = arg1;
        func_008E5200(M2C_FIELD(arg0, u8 *, 0x1DE));
    }
}
