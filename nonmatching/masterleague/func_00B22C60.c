/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00B22AA0();                            /* extern */
extern s32 D_003EAE20;
extern u8 D_003EAE28;

void func_00B22C60(void) {
    s32 temp_v0;

    if (D_003EAE28 == 1) {
        D_003EAE28 = 0;
    }
    if (D_003EAE20 == 0) {
        temp_v0 = func_0096DB90(0x5C);
        D_003EAE20 = temp_v0;
        func_001C48E8(temp_v0, 0, 0x5C);
    }
    func_00B22AA0();
    func_001D5F80(0x10333);
}
