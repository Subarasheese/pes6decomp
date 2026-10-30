/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B9F830();                                /* extern */
extern M2C_UNK func_00BE5770;

s32 func_00BE5950(void *arg0) {
    if (func_00B9F830() != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5770;
    }
    return 0;
}
