/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002306D0();                                /* extern */
s32 func_0023AEC0();                                /* extern */
M2C_UNK func_00C390C0(s32, s32);                    /* extern */
extern char D_00591C09[];

void func_0023AE40(void) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = func_002306D0() & 0xFF;
    var_s0 = 1;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            var_s0 = 0;
        }
    } else if ((*(u8 *)D_00591C09) == 1) {
        var_s0 = 3;
    } else {
        var_s0 = 2;
    }
    func_00C390C0(var_s0 & 0xFF, func_0023AEC0());
}
