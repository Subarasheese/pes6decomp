/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBAA00[];
extern char D_00CBAA14[];

f32 func_009B4310(void) {
    f32 var_f0;
    f32 var_f0_2;

    if ((s32) (*(u16 *)D_00CBAA00) < 0) {
        var_f0_2 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBAA00) >> 1) | ((*(u16 *)D_00CBAA00) & 1));
    } else {
        var_f0_2 = (f32) (*(u16 *)D_00CBAA00);
    }
    var_f0 = (*(f32 *)D_00CBAA14) - var_f0_2;
    if (var_f0 < 0.0f) {
        var_f0 += 299.0f;
    }
    return var_f0;
}
