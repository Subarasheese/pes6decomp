/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E31C0[];

s32 func_002B9E90(char *arg0) {
    if (((*(f32 *)D_005E31C0) < (0.001f * (f32) M2C_FIELD(arg0, s32 *, 4))) || !((*(f32 *)D_005E31C0) <= (0.001f * (f32) M2C_FIELD(arg0, s32 *, 8)))) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
