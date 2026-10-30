/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E7610(s32);                         /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00B447B0();                            /* extern */
extern s32 D_003EAE6C;

void func_00B449B0(void) {
    s32 temp_v0;

    if (D_003EAE6C == 0) {
        if (D_003EAE6C == 0) {
            temp_v0 = func_0096DB90(0x6D4);
            D_003EAE6C = temp_v0;
            func_001C48E8(temp_v0, 0, 0x6D4);
        }
        func_00B447B0();
        func_001E7610(func_0021E000(0x11AU));
        func_001D5F80(0x1033F);
        func_001D5F80(0x10344);
        func_001D5F80(0x10385);
    }
}
