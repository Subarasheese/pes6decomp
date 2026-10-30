/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00B60D20(s32);                         /* extern */
extern s32 D_003EAEC8;

void func_00B60F40(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (D_003EAEC8 == 0) {
        if (D_003EAEC8 == 0) {
            temp_v0 = func_0096DB90(0x98);
            D_003EAEC8 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x98);
        }
        func_00B60D20(arg0);
        if (arg1 == 1) {
            func_001D5F80(0x10329);
        }
    }
}
