/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0D[];

s32 func_00B24670(void) {
    s32 var_v0;

    var_v0 = ((u64) ((s64) (*(u8 *)D_00CBBF0D) << 0x3E) >> 0x3F) != 0;
    if (var_v0 == 0) {
        var_v0 = ((u64) ((s64) (*(u8 *)D_00CBBF0D) << 0x3D) >> 0x3F) != 0;
    }
    return var_v0;
}
