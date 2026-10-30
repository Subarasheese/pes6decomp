/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
s32 func_002F3850(s32);                             /* extern */
extern char D_0065E918[];
extern char D_0065EE84[];

s32 func_00655540(void) {
    s32 var_s1;

    var_s1 = 0;
    if (func_002F3850(M2C_FIELD(((void *)D_0065EE84), s32 *, 0)) == 2) {
        var_s1 = 1;
        M2C_FIELD(((void *)D_0065EE84), s8 *, 0xBA) = 1;
    }
    if (var_s1 == 1) {
        if ((*(u8 *)D_0065E918) == 1) {
            func_001B6460(1);
        }
        (*(u8 *)D_0065E918) = 0;
    }
    return var_s1;
}
