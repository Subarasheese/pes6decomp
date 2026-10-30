/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00873F60(s32 *, s32);                  /* extern */
M2C_UNK func_00874120(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00871A80(s32 *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 != 0x4402) {
            return -0x46;
        }
        func_00874470();
        func_00874120(arg0, arg1 + 0x39);
        func_00874120(arg0, arg1 + 0x3A);
        func_00873F60(arg0, arg1);
        func_00873F60(arg0, arg1 + 4);
        func_001C48E8(arg1 + 8, 0, 0x31);
        func_00873EE0(arg0, arg1 + 8, 0x30);
        func_001C48E8(arg1 + 0x3B, 0, 0x81);
        func_00873EE0(arg0, arg1 + 0x3B, 0x80);
        func_00874460(arg0);
        return 0x4402;
    }
    return -0x18;
}
