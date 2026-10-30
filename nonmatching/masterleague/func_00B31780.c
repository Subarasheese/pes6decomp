/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B31080();                            /* extern */
M2C_UNK func_00B315B0();                            /* extern */
extern s32 D_003EAE3C;

void func_00B31780(void) {
    if (D_003EAE3C != 0) {
        func_00B315B0();
        func_00B31080();
        if (D_003EAE3C != 0) {
            func_0096DA00(D_003EAE3C);
            D_003EAE3C = 0;
        }
        func_001D5C40(0x10335);
    }
}
