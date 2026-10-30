/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0019CA68(s64 arg0) {
    s64 temp_a2;
    u64 temp_a1;
    u64 temp_a1_2;
    u64 var_a1;

    temp_a2 = ((u64) (arg0 * 2) >> 0x35) - 0x433;
    if (temp_a2 < -0x35) {
        return 0;
    }
    if (temp_a2 >= 0xD) {
        return 0x270F;
    }
    temp_a1 = ((u64) (arg0 << 0xC) >> 0xC) | (0x8000 << 0x25);
    if (temp_a2 < 0) {
        temp_a1_2 = temp_a1 >> ((s64) (((0 - temp_a2) - 2) << 0x20) >> 0x20);
        if ((temp_a1_2 & 3) != 3) {
            var_a1 = temp_a1_2 >> 2;
        } else {
            var_a1 = (temp_a1_2 >> 2) + 1;
        }
    } else {
        var_a1 = temp_a1 << ((s64) (temp_a2 << 0x20) >> 0x20);
    }
    return (s64) (var_a1 << 0x20) >> 0x20;
}
