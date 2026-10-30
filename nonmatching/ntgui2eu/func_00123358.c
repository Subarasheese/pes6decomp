/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001232E8(M2C_UNK);                     /* extern */
s32 func_00135DB8();                                /* extern */
M2C_UNK func_00136F68();                            /* extern */

void func_00123358(s32 arg0) {
    if (arg0 >= 0) {
        if (arg0 < 2) {
            if (func_00135DB8() == 0) {
                func_001232E8(1);
                func_00136F68();
                return;
            }
            func_001232E8(0);
        }
    }
}
