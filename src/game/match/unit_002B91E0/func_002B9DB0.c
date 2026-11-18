/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E31C0[];
extern char D_005E31C4[];

s32 func_002B9DB0(char *arg0) {
    f32 temp_f2;

    temp_f2 = (*(f32 *)D_005E31C0) / (*(f32 *)D_005E31C4);
    if ((temp_f2 < (0.001f * (f32) M2C_FIELD(arg0, s32 *, 4))) || !(temp_f2 <= (0.001f * (f32) M2C_FIELD(arg0, s32 *, 8)))) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
