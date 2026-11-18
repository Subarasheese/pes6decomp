/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_002A6D40(M2C_UNK, M2C_UNK);
extern char D_005E2F78[];
extern char D_005E2F9C[];

s32 func_002B9A10(void) {
    if (func_002A6D40(1, 0) == 0) {
        *(((char *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
