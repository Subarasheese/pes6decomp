/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00846D80();                                /* extern */
extern char D_008AA10C[];
extern char D_008AA10D[];

s32 func_00835A40(void) {
    if ((*(u8 *)D_008AA10D) == 0) {
        goto block_7;
    }
    if ((*(u8 *)D_008AA10C) == 0) {
        goto block_7;
    }
    if (func_00846D80() >= 3) {
        return 1;
    }
block_7:
    return 0;
}
