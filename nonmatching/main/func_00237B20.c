/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710();                                /* extern */
s32 func_00231240();                                /* extern */

s32 func_00237B20(void) {
    s32 temp_v1;

    if (func_00231240() == 1) {
        return 0;
    }
    temp_v1 = func_00226710() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0x39:
        return 1;
    case 0x2D:
    case 0x26:
    case 0x11:
    case 0x8:
    case 0xA:
    case 0x9:
        return 1;
    default:
        return 0;
    }
}
