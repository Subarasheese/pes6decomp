/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00124860();                            /* extern */
s32 func_00158B68();                                /* extern */
extern char D_005BEDC0[];
extern char D_005BEDEC[];

s32 func_0014BEC8(void) {
    if (func_00158B68() == 0) {
        if ((*(s32 *)D_005BEDC0) >= 0) {
            if (((*(s32 *)D_005BEDC0) >= 3) && ((*(s32 *)D_005BEDC0) == 3)) {
                func_00124860();
            }
        }
        (*(s32 *)D_005BEDEC) = -1;
    }
    return 0;
}
