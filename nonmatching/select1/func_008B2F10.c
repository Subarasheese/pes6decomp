/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B6FA0(s32);                         /* extern */

void func_008B2F10(void *arg0) {
    if (arg0 != NULL) {
        func_001B6FA0(M2C_FIELD(arg0, s32 *, 0xC));
    }
}
