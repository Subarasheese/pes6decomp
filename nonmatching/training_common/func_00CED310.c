/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DF7B0(s32);                         /* extern */

void func_00CED310(void *arg0) {
    if (arg0 != NULL) {
        func_001DF7B0(M2C_FIELD(arg0, s32 *, 0x10));
    }
}
