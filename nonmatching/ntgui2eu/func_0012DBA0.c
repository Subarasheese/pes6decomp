/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B59C4[];
extern char D_011D4CF8[];
extern char D_011D4D3C[];
extern char D_011D4D40[];
extern char D_011D4D4C[];
extern char D_011D4D50[];

void func_0012DBA0(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    if ((*(s32 *)D_011D4CF8) < (*(s32 *)D_011D4D3C)) {
        (*(s32 *)D_011D4D40) = 1;
        (*(s32 *)D_011D4D50) = 1;
        (*(s32 *)D_011D4D4C) += (*(s32 *)D_005B59C4) * ((s32) M2C_FIELD(arg2, s32 *, 0xC) >> 4);
    }
}
