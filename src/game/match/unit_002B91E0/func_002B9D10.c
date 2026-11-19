/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00BBB8C0(M2C_UNK);
extern char D_005E2F78[];
extern char D_005E2F9C[];

s32 func_002B9D10(char *arg0) {
    if (func_00BBB8C0(0x64) >= M2C_FIELD(arg0, s32 *, 4)) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
