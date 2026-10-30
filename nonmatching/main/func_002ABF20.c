/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002A87B0(M2C_UNK *);                   /* extern */
f32 func_002A9440();                                /* extern */
extern char D_005E2520[];
extern char D_005E2521[];
extern char D_005E2522[];
extern char D_005E2524[];
extern char D_005E256C[];
extern char D_005E2628[];
extern char D_005E262C[];
extern char D_005E2674[];
extern char D_005E2678[];
extern char D_005E267C[];
extern char D_005E268C[];
extern char D_005E2690[];
extern M2C_UNK func_002A9B80;

void func_002ABF20(s8 arg0, s8 arg1) {
    f32 temp_f1;
    f32 var_f0;

    (*(s8 *)D_005E2520) = 0;
    (*(s8 *)D_005E2521) = arg0;
    (*(s8 *)D_005E2522) = arg1;
    (*(s32 *)D_005E256C) = 0;
    func_001C48E8(((void *)D_005E2524), 0, 0x48);
    (*(s32 *)D_005E2628) = 0;
    (*(s32 *)D_005E262C) = 0;
    (*(s32 *)D_005E2674) = 0;
    (*(s32 *)D_005E2678) = 0;
    (*(s32 *)D_005E267C) = 0;
    (*(f32 *)D_005E2690) = 0.0f;
    (*(s32 *)D_005E268C) = 0;
    temp_f1 = (0.0f - func_002A9440()) / 1.0f;
    var_f0 = 0.2f;
    (*(f32 *)D_005E2690) = temp_f1;
    if (!(temp_f1 <= 0.2f)) {

    } else {
        var_f0 = -0.2f;
        if (!(temp_f1 < -0.2f)) {
            var_f0 = temp_f1;
        }
    }
    (*(f32 *)D_005E2690) = var_f0;
    func_002A87B0(&func_002A9B80);
}
