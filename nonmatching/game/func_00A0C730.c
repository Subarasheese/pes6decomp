/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00A02030();                            /* extern */

s32 func_00A0C730(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x1A) == 0xFF) {
        return 0;
    }
    func_00A02030();
    return 1;
}
