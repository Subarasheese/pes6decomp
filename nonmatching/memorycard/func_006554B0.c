/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */
extern char D_0065EE84[];

s32 func_006554B0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_002F3850(M2C_FIELD(((void *)D_0065EE84), s32 *, 0));
    if (((temp_v0 == 2) || (temp_v0 == 0) || (temp_v0 == 4)) && (M2C_FIELD(((void *)D_0065EE84), u8 *, 0xB9) == 0) && (M2C_FIELD(((void *)D_0065EE84), u8 *, 0xBA) == 0) && (M2C_FIELD(((void *)D_0065EE84), u8 *, 0xBB) != 2)) {
        var_s0 = 1;
    }
    return var_s0;
}
