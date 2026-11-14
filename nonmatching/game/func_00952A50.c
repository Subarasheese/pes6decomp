/* compiler: mwcc-3.0.1b210-O2 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CB5374[];

u8 func_00952A50(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = ((arg0 & 0xFFFF) + 0x1000) & 0xE000;
    var_v0 = temp_v1 >> 0xD;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 0x1FFF) >> 0xD;
    }
    return *(((u8 *)D_00CB5374) + (var_v0 & 0xFFFF));
}
