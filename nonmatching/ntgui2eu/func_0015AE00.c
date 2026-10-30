/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011E6B28[];
extern char D_011E6B2C[];

s32 func_0015AE00(void) {
    return (*(s32 *)D_011E6B28) < (*(s32 *)D_011E6B2C);
}
