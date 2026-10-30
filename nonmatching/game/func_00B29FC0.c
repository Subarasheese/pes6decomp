/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E7C[];

void func_00B29FC0(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xB0) = (s32) (M2C_FIELD(arg1, s32 *, 0xB0) & 0xFFF02FFF);
    M2C_FIELD(arg1, s32 *, 0xB4) = (s32) (M2C_FIELD(arg1, s32 *, 0xB4) & 0xFFF02FFF);
    (*(s32 *)D_00591E7C) &= 0xFFF02FFF;
}
