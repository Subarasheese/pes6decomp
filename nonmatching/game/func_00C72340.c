/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD4F[];
extern char D_00CCBD9F[];

void func_00C72340(s8 arg0) {
    (*(s8 *)D_00CCBD4F) = arg0;
    (*(s8 *)D_00CCBD9F) = arg0;
    D_003EA820 = 1;
}
