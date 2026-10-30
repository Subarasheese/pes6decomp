/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011E0D00[];

s32 func_00154300(void) {
    return (*(s32 *)D_011E0D00) != 0;
}
