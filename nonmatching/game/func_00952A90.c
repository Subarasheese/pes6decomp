/* compiler: mwcc-3.0.1b210-O2 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CB5374[];

s32 func_00952A90(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = ((arg0 & 0xFFFF) + 0x1000) & 0xE000;
    var_a0 = temp_v0 >> 0xD;
    if (temp_v0 < 0) {
        var_a0 = (s32) (temp_v0 + 0x1FFF) >> 0xD;
    }
    return (arg1 & 0xFF) >= (s32) *(((u8 *)D_00CB5374) + var_a0);
}
