/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u64 func_001B6350(void);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
s32 func_002F3850(s32);                             /* extern */
extern char D_0065E918[];
extern char D_0065EE84[];

s32 func_006555C0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_002F3850(M2C_FIELD(((void *)D_0065EE84), s32 *, 0));
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        var_s0 = 1;
        M2C_FIELD(((void *)D_0065EE84), s8 *, 0xB9) = 1;
    }
    if (var_s0 == 1) {
        if (func_001B6350() == 1) {
            func_001B6460(0);
            (*(s8 *)D_0065E918) = 1;
        } else {
            (*(s8 *)D_0065E918) = 0;
        }
    }
    return var_s0;
}
