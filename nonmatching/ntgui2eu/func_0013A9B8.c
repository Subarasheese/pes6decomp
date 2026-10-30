/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0015E3F8();                                /* extern */
extern char D_005BCB44[];

s32 func_0013A9B8(void) {
    switch ((*(s32 *)D_005BCB44)) {                           /* irregular */
    case 0:
    default:
        return 0;
    case 1:
        return func_0015E3F8();
    }
}
