/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_009B7CA0();                            /* extern */
extern s32 D_003EA9B0;

void func_009B7F30(void) {
    s32 temp_v0;

    if (D_003EA9B0 == 0) {
        if (D_003EA9B0 == 0) {
            temp_v0 = func_0096DB90(0x23C);
            D_003EA9B0 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x23C);
        }
        func_009B7CA0();
        func_001D5F80(0x102A0);
    }
}
