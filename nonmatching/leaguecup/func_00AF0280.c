/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AF1AF0();                            /* extern */
M2C_UNK func_00AF3110();                            /* extern */
extern s32 D_003EAD44;

void func_00AF0280(void) {
    if (D_003EAD44 != 0) {
        func_00AF1AF0();
        func_00AF3110();
        if (D_003EAD44 != 0) {
            func_0096DA00(D_003EAD44);
            D_003EAD44 = 0;
        }
        func_001D5C40(0x102B4);
        func_001D5C40(0x10344);
        func_001D5C40(0x10385);
        func_001E7140(func_0021E000(0x147U));
        func_001E7140(func_0021E000(0x114U));
    }
}
