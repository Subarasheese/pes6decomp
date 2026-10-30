/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008F9C90[];
extern char D_008F9CC0[];
extern char D_008F9CF0[];
extern char D_008F9CF4[];
extern char D_008F9CF8[];
extern char D_008F9CFC[];
extern char D_008F9D00[];
extern char D_008F9D04[];
extern char D_008F9D08[];
extern char D_008F9D0C[];
extern char D_008F9D10[];
extern char D_008F9D14[];
extern char D_008F9D18[];
extern char D_008F9D1C[];

void func_008F8CD0(M2C_UNK **arg0, void *arg1, s32 arg2) {
    f32 var_f0;

    switch (arg2) {                                 /* irregular */
    default:
        *arg0 = ((void *)D_008F9C90);
        var_f0 = (*(f32 *)D_008F9D0C);
        M2C_FIELD(arg1, f32 *, 0) = (f32) (*(f32 *)D_008F9D00);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (*(f32 *)D_008F9D04);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_008F9D08);
        break;
    case 1:
        *arg0 = ((void *)D_008F9C90);
        var_f0 = (*(f32 *)D_008F9D1C);
        M2C_FIELD(arg1, f32 *, 0) = (f32) (*(f32 *)D_008F9D10);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (*(f32 *)D_008F9D14);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_008F9D18);
        break;
    case 2:
        *arg0 = ((void *)D_008F9CC0);
        var_f0 = (*(f32 *)D_008F9D1C);
        M2C_FIELD(arg1, f32 *, 0) = (f32) (*(f32 *)D_008F9D10);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (*(f32 *)D_008F9D14);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_008F9D18);
        break;
    case 3:
        *arg0 = ((void *)D_008F9C90);
        var_f0 = (*(f32 *)D_008F9CFC);
        M2C_FIELD(arg1, f32 *, 0) = (f32) (*(f32 *)D_008F9CF0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (*(f32 *)D_008F9CF4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_008F9CF8);
        break;
    }
    M2C_FIELD(arg1, f32 *, 0xC) = var_f0;
}
