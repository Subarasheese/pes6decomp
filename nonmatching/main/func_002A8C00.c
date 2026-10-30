/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2140[];
extern char D_005E2144[];
extern char D_005E2148[];
extern char D_005E214C[];
extern char D_005E2150[];
extern char D_005E2154[];
extern char D_005E2158[];
extern char D_005E215C[];
extern char D_005E2160[];
extern char D_005E2164[];
extern char D_005E2168[];
extern char D_005E216C[];
extern char D_005E2170[];
extern char D_005E2174[];
extern char D_005E2178[];
extern char D_005E217C[];
extern char D_005E2180[];
extern char D_005E2184[];
extern char D_005E2188[];
extern char D_005E218C[];

void func_002A8C00(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    f32 var_f4;
    f32 var_f5;

    var_f4 = 120.0f;
    if (!(fparg0 <= 120.0f)) {

    } else {
        var_f4 = 0.0f;
        if (!(fparg0 < 0.0f)) {
            var_f4 = fparg0;
        }
    }
    if (!(var_f4 < 0.2f)) {
        var_f5 = 1.0f;
    } else {
        var_f5 = 5.0f * var_f4;
    }
    var_f3 = 1.8f;
    temp_f0 = 2.0f * var_f4;
    if (temp_f0 >= 1.8f) {
        var_f3 = temp_f0;
    }
    var_f2 = 120.0f;
    if (!(var_f4 <= 120.0f)) {

    } else {
        var_f2 = 0.0f;
        if (!(var_f4 < 0.0f)) {
            var_f2 = var_f4;
        }
    }
    var_f0 = 1.0f;
    temp_f1 = 5.0f * var_f2;
    if (!(var_f5 <= 1.0f)) {

    } else {
        var_f0 = 0.0f;
        if (!(var_f5 < 0.0f)) {
            var_f0 = var_f5;
        }
    }
    (*(f32 *)D_005E2144) = var_f2;
    (*(f32 *)D_005E2154) = temp_f1;
    (*(f32 *)D_005E2140) = var_f2;
    (*(f32 *)D_005E2164) = var_f0;
    (*(f32 *)D_005E2150) = temp_f1;
    (*(f32 *)D_005E2174) = var_f3;
    (*(f32 *)D_005E2160) = var_f0;
    (*(f32 *)D_005E2170) = var_f3;
    if (!((*(f32 *)D_005E2180) <= var_f2)) {
        (*(f32 *)D_005E2180) = var_f2;
    }
    if (!((*(f32 *)D_005E2184) <= (*(f32 *)D_005E2144))) {
        (*(f32 *)D_005E2184) = (*(f32 *)D_005E2144);
    }
    var_f2_2 = 120.0f;
    if (!(var_f4 <= 120.0f)) {

    } else {
        var_f2_2 = 0.0f;
        if (!(var_f4 < 0.0f)) {
            var_f2_2 = var_f4;
        }
    }
    var_f0_2 = 1.0f;
    if (!(var_f5 <= 1.0f)) {

    } else {
        var_f0_2 = 0.0f;
        if (!(var_f5 < 0.0f)) {
            var_f0_2 = var_f5;
        }
    }
    (*(f32 *)D_005E2158) = 5.0f * var_f2_2;
    (*(f32 *)D_005E2168) = var_f0_2;
    (*(f32 *)D_005E2148) = var_f2_2;
    (*(f32 *)D_005E2178) = var_f3;
    if (!((*(f32 *)D_005E2188) <= var_f2_2)) {
        (*(f32 *)D_005E2188) = var_f2_2;
    }
    var_f1 = 60.0f;
    temp_f0_2 = 1.5f * var_f4;
    if (!(temp_f0_2 <= 60.0f)) {

    } else {
        var_f1 = 0.0f;
        if (!(temp_f0_2 < 0.0f)) {
            var_f1 = temp_f0_2;
        }
    }
    (*(f32 *)D_005E214C) = var_f1;
    (*(f32 *)D_005E215C) = 5.0f * var_f1;
    temp_f1_2 = 0.8f * var_f5;
    var_f0_3 = 1000.0f;
    if (!(temp_f1_2 <= 1000.0f)) {

    } else {
        var_f0_3 = 0.0f;
        if (!(temp_f1_2 < 0.0f)) {
            var_f0_3 = temp_f1_2;
        }
    }
    (*(f32 *)D_005E216C) = var_f0_3;
    (*(f32 *)D_005E217C) = var_f3;
    if (!((*(f32 *)D_005E218C) <= (*(f32 *)D_005E214C))) {
        (*(f32 *)D_005E218C) = (*(f32 *)D_005E214C);
    }
}
