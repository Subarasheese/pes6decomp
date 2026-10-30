/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B36280();                            /* extern */
M2C_UNK func_00B363E0();                            /* extern */
extern s32 D_003EAE50;

void func_00B36420(void) {
    if (D_003EAE50 != 0) {
        func_00B363E0();
        func_00B36280();
        if (D_003EAE50 != 0) {
            func_0096DA00(D_003EAE50);
            D_003EAE50 = 0;
        }
        func_001D5C40(0x10341);
    }
}
