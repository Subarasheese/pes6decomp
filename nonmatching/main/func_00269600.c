/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008F9CD0();                                /* extern */
M2C_UNK func_00C99A40(s32);                         /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern void *D_003AE9D0;

s32 func_00269600(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00C99AD0(M2C_FIELD(D_003AE9D0, void **, 0xCC), arg2);
    if (func_008F9CD0() == 0) {
        func_00C99A40(arg0);
        M2C_FIELD(M2C_FIELD(D_003AE9D0, void **, 0xCC), s16 *, 0x10) = 1;
        return 2;
    }
    M2C_FIELD(M2C_FIELD(D_003AE9D0, void **, 0xCC), s16 *, 0x10) = 0;
    return 2;
}
