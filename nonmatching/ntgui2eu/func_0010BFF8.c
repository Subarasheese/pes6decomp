/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0044AA40[];
extern char D_0044AA44[];

void func_0010BFF8(s32 arg0, s32 arg1) {
    (*(s32 *)D_0044AA40) = arg0;
    (*(s32 *)D_0044AA44) = arg1;
}
