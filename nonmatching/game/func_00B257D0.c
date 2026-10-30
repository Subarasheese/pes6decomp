/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEA4[];
extern char D_00CBBEA8[];

void func_00B257D0(s32 arg0) {
    s32 var_t0;
    s32 var_v1;
    s32 var_v1_3;
    u8 var_v1_2;

    if (arg0 != 1) {
        if ((3 != 2) && (3 != 1)) {
            var_v1 = 0;
        } else {
            var_v1 = 1;
        }
        (*(s32 *)D_00CBBEA8) = 3;
        (*(u8 *)D_00CBBEA4) = ((*(u8 *)D_00CBBEA4) & ~2) | ((var_v1 & 1) * 2);
        var_v1_2 = ((*(u8 *)D_00CBBEA4) & ~1) | 1;
    } else {
        var_t0 = 2;
        if ((2 != 2) && (2 != 1)) {
            var_t0 = 3;
            var_v1_3 = 0;
        } else {
            var_v1_3 = 1;
        }
        (*(s32 *)D_00CBBEA8) = var_t0;
        (*(u8 *)D_00CBBEA4) = ((*(u8 *)D_00CBBEA4) & ~2) | ((var_v1_3 & 1) * 2);
        var_v1_2 = ((*(u8 *)D_00CBBEA4) & ~1) | 1;
    }
    (*(u8 *)D_00CBBEA4) = var_v1_2;
}
