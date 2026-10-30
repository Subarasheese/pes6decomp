/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AEC450(M2C_UNK);                         /* extern */
extern char D_00B02B70[];
extern char D_00B02B74[];
extern char D_00B02B7C[];

s32 func_00AEC9A0(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = (*(s32 *)D_00B02B70);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        var_s0 += 1;
        /* fallthrough */
    case 1:
        var_s0 += 1;
        /* fallthrough */
    case 2:
        temp_v0 = func_00AEC450(0);
        (*(s32 *)D_00B02B74) = temp_v0;
        if (temp_v0 != 0) {
            var_s0 += 1;
        case 3:
            var_s0 += 1;
        default:
            var_s1 = 1;
            (*(u8 *)D_00B02B7C) = ((*(u8 *)D_00B02B7C) & ~2) | 2;
        }
        break;
    }
    (*(s32 *)D_00B02B70) = var_s0;
    return var_s1;
}
