/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D376E8[];
extern char D_00D37724[];
extern char D_00D37728[];
extern char D_00D3776F[];
extern char D_00D37770[];

s32 func_00D0F4F0(void) {
    s8 var_v1;
    s8 var_v1_2;

    if ((*(s32 *)D_00D376E8) == 0) {
        var_v1 = 0;
        (*(s8 *)D_00D3776F) = 0;
    } else {
        var_v1 = (*(s8 *)D_00D3776F);
    }
    if (var_v1 == 1) {
        if ((*(s32 *)D_00D376E8) != 0) {
            (*(s8 *)D_00D3776F) = 0;
        }
        if ((*(s32 *)D_00D376E8) != 0) {
            (*(s32 *)D_00D37724) = 1;
        }
    }
    if ((*(s32 *)D_00D376E8) == 0) {
        var_v1_2 = 0;
        (*(s8 *)D_00D37770) = 0;
    } else {
        var_v1_2 = (*(s8 *)D_00D37770);
    }
    if (var_v1_2 == 1) {
        if ((*(s32 *)D_00D376E8) != 0) {
            (*(s8 *)D_00D37770) = 0;
        }
        if ((*(s32 *)D_00D376E8) != 0) {
            (*(s32 *)D_00D37728) = 1;
        }
    }
    return 1;
}
