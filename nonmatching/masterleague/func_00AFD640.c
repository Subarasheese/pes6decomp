/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994760();                                /* extern */

s32 func_00AFD640(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_00994760();
    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 0x1389) {
        return temp_v0 + ((temp_v1 - 1) * 4) + 0x61B88;
    }
    return 0;
}
