/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 *func_00223960();                               /* extern */
s32 func_00223AE0();                                /* extern */

s32 func_0021F170(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 & 0xFFFF;
    if ((temp_s0 >= 0x40) && (temp_s0 < 0xCC)) {
        return func_00223AE0() + ((temp_s0 - 0x40) * 0x58);
    }
    if ((u32) (temp_s0 - 0x126) >= 2U) {
        return 0;
    }
    return *func_00223960();
}
