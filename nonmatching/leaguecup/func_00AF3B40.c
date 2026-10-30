/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AF3870();                            /* extern */
M2C_UNK func_00AF40B0();                            /* extern */
extern s32 D_003EAD48;

void func_00AF3B40(void) {
    if (D_003EAD48 != 0) {
        func_00AF40B0();
        func_00AF3870();
        if (D_003EAD48 != 0) {
            func_0096DA00(D_003EAD48);
            D_003EAD48 = 0;
        }
        func_001D5C40(0x102B5);
        func_001D5C40(0x10344);
    }
}
