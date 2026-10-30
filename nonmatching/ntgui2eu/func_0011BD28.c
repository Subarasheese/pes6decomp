/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3694[];

s32 func_0011BD28(s32 arg0) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)D_005B3694);
    (*(s32 *)D_005B3694) = arg0;
    return temp_v0;
}
