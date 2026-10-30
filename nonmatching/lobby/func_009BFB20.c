/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DD40[];

s32 func_009BFB20(void) {
    if ((*(s32 *)D_00A7DD40) != 0) {
        return (*(s32 *)D_00A7DD40) + 0x157;
    }
    return 0;
}
