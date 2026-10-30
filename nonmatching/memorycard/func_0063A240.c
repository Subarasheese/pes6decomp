/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00658A70[];
extern char D_00658AA0[];
extern char D_00658AD0[];
extern char D_00658AD4[];
extern char D_00658AD8[];
extern char D_00658ADC[];
extern char D_00658AE0[];
extern char D_00658AE4[];
extern char D_00658AE8[];
extern char D_00658AEC[];

void func_0063A240(M2C_UNK **arg0, void *arg1, s32 arg2) {
    f32 var_f0;

    if (arg2 == 1) {
        *arg0 = ((void *)D_00658AA0);
        var_f0 = (*(f32 *)D_00658AEC);
        M2C_FIELD(arg1, f32 *, 0) = (f32) (*(f32 *)D_00658AE0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (*(f32 *)D_00658AE4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_00658AE8);
    } else {
        *arg0 = ((void *)D_00658A70);
        var_f0 = (*(f32 *)D_00658ADC);
        M2C_FIELD(arg1, f32 *, 0) = (f32) (*(f32 *)D_00658AD0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (*(f32 *)D_00658AD4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_00658AD8);
    }
    M2C_FIELD(arg1, f32 *, 0xC) = var_f0;
}
