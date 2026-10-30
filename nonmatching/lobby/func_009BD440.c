/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099EA40(s32);                             /* extern */

s32 func_009BD440(void *arg0) {
    s32 temp_v1;

    if (arg0 == NULL) {
        return -1;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 6:
        /* fallthrough */
    case 8:
        return func_0099EA40(M2C_FIELD(arg0, s32 *, 4));
    default:
        return -1;
    }
}
