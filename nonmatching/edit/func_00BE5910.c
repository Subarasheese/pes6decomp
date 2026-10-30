/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B9F840();                                /* extern */
extern M2C_UNK func_00BE4D10;

s32 func_00BE5910(void *arg0) {
    if (func_00B9F840() != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE4D10;
    }
    return 0;
}
