/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern char D_00A03A00[];

M2C_UNK *func_00936B90(void) {
    if (func_0082C2A0() == 0) {
        return NULL;
    }
    return ((void *)D_00A03A00);
}
