/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D085B0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0xA;
    }
    if (arg1 >= 0) {
        if (arg1 < 5) {
            return M2C_FIELD(((arg1 * 4) + arg0), s32 *, 4);
        }
        goto block_7;
    }
block_7:
    return 0xA;
}
