/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009FD320(M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00A037D8[];

void func_009FBEF0(M2C_UNK arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    func_009FD320(0x806C, arg2, ((void *)D_00A037D8), 1);
    *arg3 = *arg1;
}
