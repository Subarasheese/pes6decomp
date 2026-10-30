/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00114E20(M2C_UNK);                         /* extern */

s32 func_00650EF0(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0) = 5;
    M2C_FIELD(arg0, s8 *, 1) = 7;
    M2C_FIELD(arg0, s8 *, 2) = 6;
    M2C_FIELD(arg0, s8 *, 3) = 5;
    M2C_FIELD(arg0, s8 *, 5) = 4;
    M2C_FIELD(arg0, s8 *, 6) = 3;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    return func_00114E20(5);
}
