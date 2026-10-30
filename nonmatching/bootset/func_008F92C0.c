/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */
extern char D_008FB030[];

s32 func_008F92C0(void) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = func_002F3850(M2C_FIELD(((void *)D_008FB030), s32 *, 0));
    if (((temp_v0 == 2) || (temp_v0 == 0) || (temp_v0 == 4)) && (M2C_FIELD(((void *)D_008FB030), u8 *, 0x9E) == 0) && (M2C_FIELD(((void *)D_008FB030), u8 *, 0x9F) == 0) && (M2C_FIELD(((void *)D_008FB030), u8 *, 0xA0) != 2)) {
        var_s1 = 1;
    }
    return var_s1;
}
