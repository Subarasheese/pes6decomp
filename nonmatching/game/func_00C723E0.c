/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD40[];
extern char D_00CCBD90[];

void func_00C723E0(s32 arg0) {
    (*(s32 *)D_00CCBD40) = arg0;
    (*(s32 *)D_00CCBD90) = arg0;
    D_003EA820 = 1;
}
