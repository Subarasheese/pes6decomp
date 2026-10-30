/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001459C0();                            /* extern */

void func_00145AE8(s32 arg0) {
    if (arg0 >= 0) {
        if (arg0 < 2) {
            func_001459C0();
            func_00136FD8(0, 2);
        }
    }
}
