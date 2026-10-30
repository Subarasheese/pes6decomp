/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00154218();                                /* extern */
M2C_UNK func_0018C748(s32);                         /* extern */

void func_00130A18(void) {
    s32 temp_v0;

    temp_v0 = func_00154218();
    if (temp_v0 != 0) {
        func_0018C748(temp_v0);
    }
}
