/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001E6630(s32);                             /* extern */

s32 func_001DC920(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_001E6630(M2C_FIELD(arg0, s32 *, 0xC));
}
