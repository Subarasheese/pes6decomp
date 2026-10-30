/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00874040(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00875110(s32 *arg0, s32 arg1, s32 arg2) {
    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != 0)) {
        if (*arg0 != 0x9342) {
            return -0x46;
        }
        func_00874470();
        func_001C48E8(arg1, 0, 0x10);
        func_00873EE0(arg0, arg1, 0xF);
        func_00874040(arg0, arg2);
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
