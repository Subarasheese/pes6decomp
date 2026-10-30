/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    u32 var_v0;

    temp_v0 = (((arg1 & 0xFFFF) - (arg0 & 0xFFFF)) + 0x10000) & 0xFFFF;
    if (temp_v0 < 0x8001) {
        var_v0 = (u32) temp_v0 >> 8;
    } else {
        temp_v1 = 0x10000 - temp_v0;
        var_v0 = (u32) (temp_v1 >> 8);
        if (temp_v1 < 0) {
            var_v0 = (u32) ((s32) (temp_v1 + 0xFF) >> 8);
        }
    }
    return var_v0 & 0xFFFF;
}
