/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00162C30(s32, s32);                    /* extern */
s32 func_00163010();                                /* extern */

void func_00162C40(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00163010();
    if (temp_v0 >= 0) {
        func_00162C30(arg0, temp_v0);
    }
}
