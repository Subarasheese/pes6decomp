/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
s32 func_00CE4CF0();                                /* extern */
s32 func_00CE5040();                                /* extern */
M2C_UNK func_00CE7DA0();                            /* extern */

void func_00CE88C0(void) {
    s32 temp_s0;

    if ((func_00CE4310() != 0) && (func_00CE4CF0() != 0)) {
        temp_s0 = func_00CE5040();
        func_00CE7DA0();
        if (temp_s0 != 0) {
            func_00CD7A00(1);
        }
    }
}
