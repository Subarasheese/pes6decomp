/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016FF38(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_001700B8(s32, s32, s32, s32, s32);         /* extern */

s32 func_001648D0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != NULL) {
        var_s0 = func_001700B8(arg1, arg2, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_0016FF38(0, 0, 0);
    }
    return var_s0;
}
