/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE35B0[];

s32 func_00B95060(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 >= 0xCC) {
        return 0;
    }
    return (*(s32 *)D_00CE35B0) + (temp_a0 * 0x16C) + 0xA4146;
}
