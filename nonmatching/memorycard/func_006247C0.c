/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C124[];

s32 func_006247C0(void) {
    if ((*(s32 *)D_0065C124) != 0) {
        return (*(s32 *)D_0065C124) + 0xC;
    }
    return 0;
}
