/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EFF90(void *, s8);
M2C_UNK func_002F4980();                            /* extern */

s32 func_002F38E0(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    func_002F4980();
    func_002EFF90(arg0 + 0xC, 1);
    *arg0 = 1;
    return 1;
}
