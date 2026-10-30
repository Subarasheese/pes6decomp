/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001A9540(u32, M2C_UNK);                    /* extern */

s64 func_001AF358(u32 *arg0) {
    s64 temp_v0;
    s64 var_s0;
    u32 temp_s0;
    u32 temp_s0_2;

    temp_s0 = *arg0;
    temp_s0_2 = (temp_s0 == 0) ? 0x12345987U : temp_s0;
    temp_v0 = func_001A9540(temp_s0_2, 0x1F31D);
    var_s0 = ((temp_s0_2 - (temp_v0 * 0x1F31D)) * 0x41A7) - (temp_v0 * 0xB14);
    if (var_s0 < 0) {
        var_s0 += 0x7FFFFFFF;
    }
    *arg0 = (u32) ((s64) (var_s0 << 0x20) >> 0x20);
    return (s64) ((var_s0 & 0x7FFFFFFF) << 0x20) >> 0x20;
}
