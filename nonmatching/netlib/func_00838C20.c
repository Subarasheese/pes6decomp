/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008AA102[];

s32 func_00838C20(s8 arg0) {
    if (func_00D0BAF0() == 0) {
        return 0;
    }
    (*(s8 *)D_008AA102) = arg0;
    return 1;
}
