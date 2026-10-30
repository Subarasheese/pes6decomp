/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019B580();                                /* extern */
M2C_UNK func_0019B590();                            /* extern */
M2C_UNK func_001A6EA8();                            /* extern */

void func_001A6E68(void) {
    if (func_0019B580() == 0x02000000) {
        func_001A6EA8();
        return;
    }
    func_0019B590();
}
