/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBAA02[];
extern char D_00CBAA04[];
extern char D_00CBAA14[];
extern char D_00CBAA18[];

f32 func_009B6310(void) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f2;

    var_f2 = (*(f32 *)D_00CBAA14);
    if ((s32) (*(u16 *)D_00CBAA02) < (s32) (*(u16 *)D_00CBAA04)) {
        if ((s32) (*(u16 *)D_00CBAA04) >= 0) {
            var_f0 = (f32) (*(u16 *)D_00CBAA04);
        } else {
            var_f0 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBAA04) >> 1) | ((*(u16 *)D_00CBAA04) & 1));
        }
        if (!((*(f32 *)D_00CBAA18) < var_f0)) {
            if ((s32) (*(u16 *)D_00CBAA04) < 0) {
                var_f0_2 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBAA04) >> 1) | ((*(u16 *)D_00CBAA04) & 1));
            } else {
                var_f0_2 = (f32) (*(u16 *)D_00CBAA04);
            }
            if (var_f2 < var_f0_2) {
                var_f2 += 300.0f;
            }
        } else {
            if ((s32) (*(u16 *)D_00CBAA04) < 0) {
                var_f0_3 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBAA04) >> 1) | ((*(u16 *)D_00CBAA04) & 1));
            } else {
                var_f0_3 = (f32) (*(u16 *)D_00CBAA04);
            }
            if (!(var_f2 < var_f0_3)) {
                var_f2 -= 300.0f;
            }
        }
    }
    return var_f2 - (*(f32 *)D_00CBAA18);
}
