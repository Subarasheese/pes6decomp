/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_009A84F0(s32);                         /* extern */
extern s32 D_003EA998;

void func_009A85B0(s32 arg0) {
    s32 temp_v0;

    if (D_003EA998 == 0) {
        if (D_003EA998 == 0) {
            temp_v0 = func_0096DB90(0x28);
            D_003EA998 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x28);
        }
        func_009A84F0(arg0);
    }
}
