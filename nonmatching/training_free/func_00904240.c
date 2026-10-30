/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C26720();                                /* extern */

s32 func_00904240(void *arg0, s32 arg1) {
    if (arg1 >= 0x40000) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0xE01) {
            return 0;
        }
        if (M2C_FIELD(arg0, u8 *, 0x1D5) != 0) {
            return 1;
        }
        if (func_00C26720() != 0) {
            return 1;
        }
        return (s32) M2C_FIELD(arg0, u8 *, 0x201) >= 5;
    }
    return 0;
}
