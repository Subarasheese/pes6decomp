/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA85C;
extern char D_00CCBF78[];
extern char D_00CCBF94[];

void func_00C7BF60(s32 arg0) {
    if ((D_003EA85C != 0) && (arg0 == 0)) {
        (*(s32 *)D_00CCBF94) = arg0;
        (*(s32 *)D_00CCBF78) = 0;
    }
}
