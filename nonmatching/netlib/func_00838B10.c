/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

M2C_UNK *func_00838B10(void) {
    if (func_00D0BAF0() == 0) {
        return NULL;
    }
    return ((void *)D_008A5CB0);
}
