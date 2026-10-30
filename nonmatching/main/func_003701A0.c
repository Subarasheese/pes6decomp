/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003701A0(u16 *arg0) {
    u16 temp_v1;

    temp_v1 = *arg0;
    if ((s32) temp_v1 >= 0x2000) {
        if ((s32) temp_v1 < 0xE001) {
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
