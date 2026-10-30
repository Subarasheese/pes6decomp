/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB8E0[];
extern char D_00CCB8E4[];

void func_00C390C0(s32 arg0, s32 arg1) {
    (*(s32 *)D_00CCB8E4) = arg0;
    (*(s32 *)D_00CCB8E0) = arg1;
}
