/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00807780();                                /* extern */
M2C_UNK func_0098F350();                            /* extern */
M2C_UNK func_0098FDF0();                            /* extern */
M2C_UNK func_00990FD0();                            /* extern */

s32 func_0098F2C0(void) {
    s64 temp_v1;

    temp_v1 = (s64) (func_00807780() << 0x38) >> 0x38;
    if (temp_v1 != 2) {
        if (temp_v1 != 1) {
            func_00990FD0();
        } else {
            func_0098FDF0();
        }
    } else {
        func_0098F350();
    }
    return 1;
}
