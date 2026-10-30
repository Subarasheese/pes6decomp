/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0083F720();                                /* extern */

s32 func_00964A90(void) {
    s64 temp_v1;

    temp_v1 = (s64) (func_0083F720() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 0:
        return 0;
    case 1:
        return 1;
    default:
        return 2;
    }
}
