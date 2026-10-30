/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_009BF280(M2C_UNK);                     /* extern */
M2C_UNK func_00B49190(s32);                         /* extern */
extern s32 D_003EAE74;

void func_00B496F0(s32 arg0) {
    s32 temp_v0;

    if (D_003EAE74 == 0) {
        if (D_003EAE74 == 0) {
            temp_v0 = func_0096DB90(0x5D0);
            D_003EAE74 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x5D0);
        }
        func_00B49190(arg0);
        func_001D5F80(0x10334);
        func_009BF280(1);
    }
}
