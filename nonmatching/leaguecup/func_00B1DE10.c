/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B1CFE0();                            /* extern */
M2C_UNK func_00B1D9B0();                            /* extern */
extern s32 D_003EAD88;

void func_00B1DE10(void) {
    if (D_003EAD88 != 0) {
        func_00B1D9B0();
        func_00B1CFE0();
        if (D_003EAD88 != 0) {
            func_0096DA00(D_003EAD88);
            D_003EAD88 = 0;
        }
        func_001D5C40(0x1030E);
        func_001D5C40(0x1033D);
        func_001D5C40(0x10344);
        func_001E7140(0x3011F);
        func_001E7140(0x300C1);
        func_001E7140(0x300C2);
        func_001E7140(0x300C3);
        func_001E7140(0x300C4);
    }
}
