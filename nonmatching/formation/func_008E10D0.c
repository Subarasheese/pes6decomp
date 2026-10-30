/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E0DD0();                            /* extern */
extern char D_008EC450[];

void func_008E10D0(void *arg0, s8 arg1, s32 arg2) {
    func_008E0DD0();
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    if (arg2 != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = ((void *)D_008EC450);
    }
}
