/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00325F60(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 11:
    case 12:
        if (M2C_FIELD(arg0, s32 *, 0x14) == 5) {
            return 1;
        }
    case 6:
    default:
        return 0;
    }
}
