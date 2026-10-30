/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093D4B0();                                /* extern */
extern char D_009FF1A8[];
extern char D_009FF1C0[];

M2C_UNK *func_009AFBC0(void) {
    if (func_0093D4B0() != 1) {
        return ((void *)D_009FF1A8);
    }
    return ((void *)D_009FF1C0);
}
