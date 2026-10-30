/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B369C[];
extern char D_005B36A0[];

void func_0011B838(s32 arg0, s32 arg1) {
    (*(s32 *)D_005B369C) = arg0;
    (*(s32 *)D_005B36A0) = arg1;
}
