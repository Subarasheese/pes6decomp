/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_003EA9C0;

s32 func_009BA940(void) {
    s32 temp_v1;

    if (D_003EA9C0 != NULL) {
        temp_v1 = *D_003EA9C0;
        if ((temp_v1 != 8) && (temp_v1 != 0x16) && (temp_v1 != 0x14) && (temp_v1 != 0x12) && (temp_v1 != 0x10) && (temp_v1 != 0xE) && (temp_v1 != 0xC) && (temp_v1 != 0xA) && (temp_v1 != 9) && (temp_v1 != 6) && (temp_v1 != 5) && (temp_v1 != 2) && (temp_v1 != 0)) {
            return 0;
        }
        return 1;
    }
    return 0;
}
