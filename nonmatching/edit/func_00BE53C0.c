/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC4F70(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_00BE5820;

s32 func_00BE53C0(M2C_UNK **arg0) {
    if (func_00BC4F70(0xED0016, 0) != 0) {
        *arg0 = &func_00BE5820;
    }
    return 0;
}
