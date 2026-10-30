/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B628E0();                                /* extern */
s32 func_00B62BA0();                                /* extern */
extern char D_00CBD269[];

s32 func_00B63030(u8 **arg0) {
    if (**arg0 == (*(u8 *)D_00CBD269)) {
        if (func_00B62BA0() != 0) {
            return 1;
        }
        goto block_5;
    }
    if (func_00B628E0() != 0) {
        return 1;
    }
block_5:
    return 0;
}
