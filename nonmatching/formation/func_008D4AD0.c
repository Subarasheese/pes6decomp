/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008D4AD0(void *arg0) {
    void *temp_v0;

    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u8 *, 0xB) != 0;
    }
    return 0;
}
