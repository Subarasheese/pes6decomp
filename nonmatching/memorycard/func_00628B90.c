/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00628BE0();                                /* extern */
M2C_UNK func_006553D0();                            /* extern */
M2C_UNK func_00655540();                            /* extern */
M2C_UNK func_006555C0();                            /* extern */

void func_00628B90(s32 arg0) {
    if (arg0 == 1) {
        if (func_00628BE0() != 0) {
            func_006555C0();
        }
    } else {
        func_006553D0();
        func_00655540();
    }
}
