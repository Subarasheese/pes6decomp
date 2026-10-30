/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00341090(void *arg0) {
    u8 temp_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 1) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x21);
            switch (temp_v1) {                      /* irregular */
            case 16:
                /* fallthrough */
            case 6:
                return 1;
            default:
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
