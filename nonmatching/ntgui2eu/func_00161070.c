/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00158B68();                                /* extern */
extern char D_005BEDEC[];

s32 func_00161070(void) {
    if (func_00158B68() == 0) {
        (*(s32 *)D_005BEDEC) = -1;
    }
    return 0;
}
