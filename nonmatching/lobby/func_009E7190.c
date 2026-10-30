/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E94A0(s32);                         /* extern */
M2C_UNK func_009E9EE0(s32, s32);                    /* extern */

void func_009E7190(s32 arg0) {
    func_009E9EE0(arg0 + 0x10, arg0);
    func_009E94A0(arg0);
}
