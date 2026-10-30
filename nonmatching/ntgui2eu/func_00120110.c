/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D40E8[];

void func_00120110(s32 arg0) {
    if (arg0 == (*(s32 *)D_011D40E8)) {
        (*(s32 *)D_011D40E8) = 0;
    }
}
