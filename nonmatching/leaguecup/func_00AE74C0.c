/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AE6070();                            /* extern */
M2C_UNK func_00AE6F20();                            /* extern */
extern s32 D_003EAD3C;

void func_00AE74C0(void) {
    if (D_003EAD3C != 0) {
        func_00AE6F20();
        func_00AE6070();
        if (D_003EAD3C != 0) {
            func_0096DA00(D_003EAD3C);
            D_003EAD3C = 0;
        }
        func_001D5C40(0x10309);
    }
}
