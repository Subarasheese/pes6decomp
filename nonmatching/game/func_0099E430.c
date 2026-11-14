/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CAA2E0[];

s32 func_0099E430(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 == 0xFFFF) {
        return 0;
    }
    return *(((u8 *)D_00CAA2E0) + (((s32) ((temp_v1 + 0x1000) & 0xE000 & 0xFFFF) >> 0xD) * 4));
}
