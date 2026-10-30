/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0015E628();                                /* extern */
M2C_UNK func_0015E638(M2C_UNK);                     /* extern */
M2C_UNK func_0015F930(s32);                         /* extern */

void func_0015F990(s32 arg0) {
    if (func_0015E628() >= 0) {
        func_0015E638(1);
        return;
    }
    func_0015F930(arg0);
}
