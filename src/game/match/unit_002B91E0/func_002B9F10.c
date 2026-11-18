/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E2FA0[];

s32 func_002B9F10(char *arg0) {
    if (!((*(s32 *)D_005E2FA0) & (M2C_FIELD(arg0, s32 *, 0x10) | (M2C_FIELD(arg0, s32 *, 0xC) | (M2C_FIELD(arg0, s32 *, 4) | M2C_FIELD(arg0, s32 *, 8)))))) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
