/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D6F10[];
extern char D_011D6F14[];
extern char D_011D6F18[];
extern char D_011D6F1C[];

void func_00134F00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(s32 *)D_011D6F10) = arg0;
    (*(s32 *)D_011D6F14) = arg1;
    (*(s32 *)D_011D6F18) = arg2;
    (*(s32 *)D_011D6F1C) = arg3;
}
