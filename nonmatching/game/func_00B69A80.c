/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A0270();                                /* extern */

s32 func_00B69A80(void) {
    s32 temp_v1;

    temp_v1 = func_009A0270() & 0xFF;
    if ((temp_v1 >= 0x28) && (temp_v1 < 0x2E)) {
        return 1;
    }
    if ((temp_v1 >= 0x4B) && (temp_v1 < 0x5B)) {
        return 1;
    }
    if ((temp_v1 >= 0x5F) && (temp_v1 < 0x6A)) {
        return 1;
    }
    if ((temp_v1 >= 0x6E) && (temp_v1 < 0x79)) {
        return 1;
    }
    return 0;
}
