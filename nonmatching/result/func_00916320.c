/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7A90(void);
M2C_UNK func_00902360();                            /* extern */
M2C_UNK func_0090F880();                            /* extern */

void func_00916320(s32 arg0) {
    func_0090F880();
    if (arg0 != 0) {
        func_00902360();
        return;
    }
    func_001B7A90();
}
