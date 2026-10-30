/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEA4[];
extern char D_00CBBEA8[];

void func_00B258D0(s32 arg0) {
    s32 var_a0;
    s32 var_v1;

    var_a0 = arg0;
    if ((var_a0 != 2) && (var_a0 != 1)) {
        var_a0 = 3;
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    (*(s32 *)D_00CBBEA8) = var_a0;
    (*(u8 *)D_00CBBEA4) = ((*(u8 *)D_00CBBEA4) & ~2) | ((var_v1 & 1) * 2);
    (*(u8 *)D_00CBBEA4) = ((*(u8 *)D_00CBBEA4) & ~1) | 1;
}
