/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C18C50(f32 fparg0, f32 fparg1) {
    s32 var_a1;
    s32 var_v1;

    var_a1 = (s32) (312.0f * ((13465.0f + fparg0) / 26930.0f));
    if (var_a1 <= 0) {
        var_a1 = 0;
    }
    if (var_a1 >= 0x137) {
        var_a1 = 0x137;
    }
    var_v1 = (s32) (210.0f * ((8729.0f + fparg1) / 17458.0f));
    if (var_v1 <= 0) {
        var_v1 = 0;
    }
    if (var_v1 >= 0xD1) {
        var_v1 = 0xD1;
    }
    return (var_a1 + (var_v1 * 0x138)) & 0xFFFF;
}
