/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B3FF50();                            /* extern */
M2C_UNK func_00B42960();                            /* extern */
extern s32 D_003EAE6C;

void func_00B448A0(void) {
    if (D_003EAE6C != 0) {
        func_00B42960();
        func_00B3FF50();
        if (D_003EAE6C != 0) {
            func_0096DA00(D_003EAE6C);
            D_003EAE6C = 0;
        }
        func_001D5C40(0x10385);
        func_001D5C40(0x1033F);
        func_001D5C40(0x10344);
        func_001E7140(func_0021E000(0x11AU));
    }
}
