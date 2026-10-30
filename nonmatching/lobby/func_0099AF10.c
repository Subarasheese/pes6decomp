/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */

s32 func_0099AF10(void) {
    if (func_001D5A10(0x1003B) == NULL) {
        func_001D5F80(0x1003B);
    }
    return 1;
}
