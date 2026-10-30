/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A89C00[];
extern char D_00A89C04[];
extern char D_00A89C08[];
extern char D_00A89C0C[];

void func_009FB680(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(s32 *)D_00A89C00) = arg0;
    (*(s32 *)D_00A89C04) = arg1;
    (*(s32 *)D_00A89C08) = arg2;
    (*(s32 *)D_00A89C0C) = arg3;
}
