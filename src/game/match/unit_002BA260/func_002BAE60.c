/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_005E2FA0[];

s32 func_002BAE60(void *arg0) {
    (*(s32 *)D_005E2FA0) |= M2C_FIELD(arg0, s32 *, 0x10) | (M2C_FIELD(arg0, s32 *, 0xC) | (M2C_FIELD(arg0, s32 *, 4) | M2C_FIELD(arg0, s32 *, 8)));
    return 0;
}
