/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00B0BCF0();                            /* extern */
extern s32 D_003EAD64;

void func_00B0BFD0(void) {
    s32 temp_v0;

    if (D_003EAD64 == 0) {
        if (D_003EAD64 == 0) {
            temp_v0 = func_0096DB90(0xD0);
            D_003EAD64 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xD0);
        }
        if (D_003EAD64 != 0) {
            func_00B0BCF0();
        }
        func_001D5F80(0x10301);
    }
}
