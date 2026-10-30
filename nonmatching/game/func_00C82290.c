/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA87C;
extern char D_00510FD0[];

void func_00C82290(void) {
    if (((*(s32 *)D_00510FD0) != 0xF) && ((*(s32 *)D_00510FD0) != 0xE) && ((*(s32 *)D_00510FD0) != 8)) {
        return;
    }
    D_003EA87C = 1;
}
