/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D40F8[];
extern char D_011D40FC[];
extern char D_011D4100[];
extern char D_011D4104[];

void func_00125940(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(s32 *)D_011D4104) = arg0;
    (*(s32 *)D_011D40F8) = arg1;
    (*(s32 *)D_011D40FC) = arg2;
    (*(s32 *)D_011D4100) = arg3;
}
