/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005926FF[];
extern char D_00CBBE48[];

s32 func_00BEE9D0(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    s32 var_a2;

    if ((*(u8 *)D_005926FF) != 1) {
        return 0;
    }
    var_a2 = 0;
    var_a1 = 0;
    var_a0 = ((void *)D_00CBBE48);
    do {
        if (M2C_FIELD(var_a0, u8 *, 9) != 0xFF) {
            var_a1 += 1;
        }
        var_a2 += 1;
        var_a0 += 1;
    } while (var_a2 < 3);
    return var_a1 & 0xFF;
}
