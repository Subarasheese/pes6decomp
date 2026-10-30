/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008DCA20(s32);                         /* extern */

void func_008DCB70(void *arg0) {
    if (arg0 != NULL) {
        func_008DCA20(M2C_FIELD(arg0, u8 *, 0x18) != 0);
    }
}
