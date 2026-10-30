/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E24B8[];

void func_00BBCB50(s32 arg0) {
    f32 var_f0;

    if (arg0 < 0) {
        var_f0 = 2.0f * (f32) (((u32) arg0 >> 1) | (arg0 & 1));
    } else {
        var_f0 = (f32) arg0;
    }
    (*(f32 *)D_005E24B8) = var_f0;
}
