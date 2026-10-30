/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00189180(s32, M2C_UNK);                    /* extern */
M2C_UNK func_001893A0(s32, s32);                    /* extern */
extern char D_0051FF48[];
extern char D_0051FF49[];

s32 func_00188FB0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u8 var_v0;

    if (arg1 == 0) {
        var_v0 = (*(u8 *)D_0051FF49);
    } else {
        var_v0 = (*(u8 *)D_0051FF48);
    }
    if (var_v0 != 0) {
        temp_v0 = func_00189180(arg1, 1);
        if (temp_v0 == 0) {
            return 0;
        }
        func_001893A0(arg0, temp_v0);
        return 1;
    }
    return 0;
}
