/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008AA658[];

s8 func_0083C560(void) {
    if (func_00D0BAF0() == 0) {
        return 0;
    }
    return (*(s8 *)D_008AA658);
}
