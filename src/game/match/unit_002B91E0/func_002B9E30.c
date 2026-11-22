/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E317C[];

s32 func_002B9E30(char *arg0) {
    if (((u32)(*(u32 *)D_005E317C) < (u32)M2C_FIELD(arg0, u32 *, 4)) ||
        (((u32)(*(u32 *)D_005E317C) > (u32)M2C_FIELD(arg0, u32 *, 8)))) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
