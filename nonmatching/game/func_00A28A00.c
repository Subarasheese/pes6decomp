/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002075B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_00A07C00(void *);                          /* extern */
s32 func_00A11DD0(void *, s32, M2C_UNK);            /* extern */
s32 func_00A99F00(M2C_UNK);                         /* extern */

s32 func_00A28A00(void *arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;

    if (func_00A99F00(0) != 0) {
        if (func_00A11DD0(arg0, arg1, 0) != 0) {
            return 0;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_a0, u16 *, 0x30) != (arg2 & 0xFFFF)) {
            func_002075B0(temp_a0, arg2, 0, 6);
        }
        return 1;
    }
    if (func_00A07C00(arg0) != 0) {
        temp_a0_2 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_a0_2, u16 *, 0x30) != (arg2 & 0xFFFF)) {
            func_002075B0(temp_a0_2, arg2, 0, 2);
        }
    }
    return 0;
}
