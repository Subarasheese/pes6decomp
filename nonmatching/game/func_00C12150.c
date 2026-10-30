/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10();                                /* extern */
extern char D_00CBDED0[];

s32 func_00C12150(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = func_00C17E10() & 0xFF;
    var_v0 = 0;
    if (temp_v1 < 0x12) {
        var_v0 = M2C_FIELD(((temp_v1 * 4) + (((arg0 & 0xFF) * 0x48) + ((void *)D_00CBDED0))), s32 *, 8);
    }
    return var_v0;
}
