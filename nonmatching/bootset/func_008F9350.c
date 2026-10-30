/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */
extern char D_008FB030[];

s32 func_008F9350(void) {
    s32 var_s1;

    var_s1 = 0;
    if (func_002F3850(M2C_FIELD(((void *)D_008FB030), s32 *, 0)) == 2) {
        var_s1 = 1;
        M2C_FIELD(((void *)D_008FB030), s8 *, 0x9F) = 1;
    }
    return var_s1;
}
