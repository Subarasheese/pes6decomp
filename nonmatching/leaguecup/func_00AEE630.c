/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AEDC70();                            /* extern */
M2C_UNK func_00AEE410();                            /* extern */
extern s32 D_003EAD40;

void func_00AEE630(void) {
    if (D_003EAD40 != 0) {
        func_00AEE410();
        func_00AEDC70();
        if (D_003EAD40 != 0) {
            func_0096DA00(D_003EAD40);
            D_003EAD40 = 0;
        }
        func_001D5C40(0x10307);
    }
}
