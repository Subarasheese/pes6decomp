/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BDA2C[];

void func_001514F8(s32 arg0) {
    if ((*(s32 *)D_005BDA2C) == arg0) {
        (*(s32 *)D_005BDA2C) = 0;
    }
}
