/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090FD20(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C99A40();                            /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern void *D_00923FC8;

s32 func_0090BC90(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(D_00923FC8, void **, 0x98);
    if (temp_v1 == NULL) {

    } else {
        M2C_FIELD(temp_v1, s16 *, 0x10) = 1;
        func_00C99A40();
        func_00C99AD0(M2C_FIELD(D_00923FC8, void **, 0x98), arg2);
        func_0090FD20(0xB, 0x6C003A);
    }
    return 2;
}
