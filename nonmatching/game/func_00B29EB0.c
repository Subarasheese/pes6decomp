/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E7C[];

void func_00B29EB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s16 *, 0xFE) = 0;
    M2C_FIELD(arg0, s8 *, 0x101) = 0;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0;
    M2C_FIELD(arg0, s8 *, 0x100) = 0;
    (*(s32 *)D_00591E7C) = 0;
}
