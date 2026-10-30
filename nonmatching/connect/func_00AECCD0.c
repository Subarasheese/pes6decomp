/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F4240(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00AECCD0(void *arg0) {
    if (arg0 != NULL) {
        func_002F4240(M2C_FIELD(arg0, s32 *, 0), 1, 0, 1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}
