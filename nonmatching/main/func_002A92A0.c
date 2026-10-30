/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E19F0[];
extern char D_005E19F4[];
extern char D_005E19F8[];
extern char D_005E19FC[];
extern char D_005E1A00[];
extern char D_005E1A04[];
extern char D_005E1A08[];
extern char D_005E1A0C[];
extern char D_005E1A10[];

void func_002A92A0(f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 var_f13;

    var_f13 = fparg1;
    if (!(var_f13 <= 0.0f)) {
        var_f13 = 0.0f;
    }
    (*(f32 *)D_005E1A00) = fparg0;
    (*(f32 *)D_005E1A08) = fparg2;
    (*(s32 *)D_005E1A0C) = 0x43960000;
    (*(f32 *)D_005E19F0) = fparg0;
    (*(f32 *)D_005E1A04) = var_f13;
    (*(f32 *)D_005E19F8) = fparg2;
    (*(f32 *)D_005E19FC) = 300.0f;
    (*(f32 *)D_005E19F4) = var_f13;
    if (!(var_f13 <= -300.0f)) {
        (*(f32 *)D_005E19FC) = -var_f13;
    }
    (*(s32 *)D_005E1A10) = 0x43960000;
}
