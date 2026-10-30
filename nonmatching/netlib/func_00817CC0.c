/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3C78[];
extern char D_008A3C88[];

s32 func_00817CC0(void) {
    if ((*(s32 *)D_008A3C78) == 0) {
        return 1;
    }
    (*(s32 *)D_008A3C88) = 1;
    return 0;
}
