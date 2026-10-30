/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BEE00(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x18) != arg1) {
            M2C_FIELD(arg0, s8 *, 0x33) = 1;
        }
        if (arg1 >= 0) {
            if (arg1 < 2) {
                M2C_FIELD(arg0, s32 *, 0x18) = arg1;
            } else {
                M2C_FIELD(arg0, s32 *, 0x18) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
        return 0;
    }
    return 4;
}
