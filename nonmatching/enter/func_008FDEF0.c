/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_008FD390(s32, void *, s32);
M2C_UNK func_008FDB80();                            /* extern */

s32 func_008FDEF0(s32 arg0, void *arg1, s32 arg2) {
    func_008FDB80();
    func_008FD390(arg0, arg1, arg2);
    return 1;
}
