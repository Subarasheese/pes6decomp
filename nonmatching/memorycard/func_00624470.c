/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00530C4C[];

void func_00624470(s32 arg0, s8 arg1) {
    if (arg0 < 0x24) {
        M2C_FIELD((arg0 + (*(s32 *)D_00530C4C)), s8 *, 0x894) = arg1;
    }
}
