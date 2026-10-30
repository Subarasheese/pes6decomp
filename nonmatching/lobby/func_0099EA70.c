/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099EA70(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x34) != arg1) {
            M2C_FIELD(arg0, s8 *, 0x97) = 1;
        }
        if (arg1 >= 0) {
            if (arg1 < 3) {
                M2C_FIELD(arg0, s32 *, 0x34) = arg1;
            } else {
                M2C_FIELD(arg0, s32 *, 0x34) = 2;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
        }
        return 0;
    }
    return 5;
}
