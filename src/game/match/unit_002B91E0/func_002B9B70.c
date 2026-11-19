/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E30E1[];
extern char D_005E32CA[];

s32 func_002B9B70(char *arg0) {
    u8 var_v0;

    if ((s32) (*(u8 *)D_005E30E1) >= 0x1D) {
        var_v0 = 0;
    } else {
        var_v0 = *(((char *)D_005E32CA) + (*(u8 *)D_005E30E1));
    }
    if ((var_v0 & 0xFF) < M2C_FIELD(arg0, s32 *, 4)) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
