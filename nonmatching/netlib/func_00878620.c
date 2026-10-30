/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00878620(s32 *arg0) {
    if (arg0 == NULL) {
        return -0x18;
    }
    if (*arg0 != 0x508D) {
        return -0x46;
    }
    func_00874470();
    func_00874460(arg0);
    return 0;
}
