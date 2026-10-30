/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B59DC[];
extern char D_005B59E0[];

void func_00130AA0(s32 *arg0, s32 *arg1) {
    *arg0 = (*(s32 *)D_005B59DC);
    *arg1 = (*(s32 *)D_005B59E0);
}
