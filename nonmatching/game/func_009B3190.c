/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3190(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a4;
    s32 temp_a5;
    s32 var_v0;

    temp_a5 = arg1 & 0xFFFF;
    temp_a4 = arg0 & 0xFFFF;
    if (arg3 != ((((temp_a4 - temp_a5) + 0x10000) & 0xFFFF) < 0x8001)) {
        var_v0 = ((temp_a5 - temp_a4) + 0x10000) & 0xFFFF;
        if (var_v0 >= 0x8001) {
            var_v0 = (0x10000 - var_v0) & 0xFFFF;
        }
        if ((arg2 & 0xFFFF) >= (var_v0 & 0xFFFF)) {
            return arg0;
        }
        goto block_5;
    }
block_5:
    return (temp_a5 + ((arg2 & 0xFFFF) * ((arg3 != 0) ? -1 : 1))) & 0xFFFF;
}
