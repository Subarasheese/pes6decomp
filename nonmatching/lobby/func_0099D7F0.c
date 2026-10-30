/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0099D840(s32);
extern char D_00A7DB30[];
extern char D_00A7DB38[];

s32 func_0099D7F0(void) {
    s32 var_v0;

    if ((*(s32 *)D_00A7DB30) == 0) {
        var_v0 = 1;
    } else {
        (*(s32 *)D_00A7DB38) = 1;
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        func_0099D840(0);
        (*(s32 *)D_00A7DB38) = 0;
    }
    return 0;
}
