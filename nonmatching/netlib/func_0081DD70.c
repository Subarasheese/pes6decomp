/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DED80(s32);                         /* extern */

s32 func_0081DD70(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 2:
        return 0;
    case 1:
        return 0;
    case 0:
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 == 0) {
            return 0;
        }
        func_001DED80(temp_a0);
        return 1;
    default:
        return 0;
    }
}
