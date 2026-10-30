/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828140();                                /* extern */
M2C_UNK func_00930A90(s32, s32, s32);               /* extern */

void func_00930BF0(s32 arg0, s32 arg1) {
    func_00930A90(arg0, arg1, func_00828140());
}
