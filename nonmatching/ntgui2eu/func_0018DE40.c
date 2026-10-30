/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_0018DE40(s32 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg1 + 0x3F;
    if (arg0 & 2) {
        temp_v0 = arg2 + 0x3F;
        var_v0 = (s32) ((temp_v0 > -1) ? temp_v0 : (arg2 + 0x7E)) >> 6;
    } else {
        temp_v0_2 = arg2 + 0x1F;
        var_v0 = (s32) ((temp_v0_2 > -1) ? temp_v0_2 : (arg2 + 0x3E)) >> 5;
    }
    return (s16) (((s32) ((temp_v1 > -1) ? temp_v1 : (arg1 + 0x7E)) >> 6) * var_v0);
}
