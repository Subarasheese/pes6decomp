/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00D19210();                                /* extern */
extern char D_00D376D8[];
extern char D_00D376E8[];
extern char D_00D37724[];
extern char D_00D3776C[];
extern char D_00D3776D[];

s32 func_00D0BE70(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_v1;
    s8 var_v0;
    s8 var_v0_2;

    var_s0 = 0;
    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    if ((*(s32 *)D_00D376D8) == 0) {
        return 0;
    }
    if ((*(s32 *)D_00D376E8) == 0) {
        var_v0 = 0;
    } else {
        var_v0 = (*(s8 *)D_00D3776C);
    }
    if (((s64) ((s64) var_v0 << 0x38) >> 0x38) == 0) {
        return 0;
    }
    if ((*(s32 *)D_00D376E8) == 0) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = (*(s8 *)D_00D3776D);
    }
    if (var_v0_2 == 0) {
        return 0;
    }
    if ((*(s32 *)D_00D376E8) == 0) {
        var_v1 = 0;
    } else {
        var_v1 = (*(s32 *)D_00D37724);
    }
    if (var_v1 != 1) {
        return 0;
    }
    temp_v0 = func_00D19210();
    switch (temp_v0) {                              /* irregular */
    case -1:
        break;
    case 1:
        var_s0 = 1;
        break;
    case 0:
        var_s0 = 2;
        break;
    }
    return var_s0;
}
