/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK func_00C13AA0;

void *func_00C13B90(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00C13AA0;
        M2C_FIELD(arg0, void **, 8) = arg0;
    }
    return arg0;
}
