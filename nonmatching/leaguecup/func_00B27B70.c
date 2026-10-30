/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B26940();                            /* extern */
M2C_UNK func_00B27090();                            /* extern */
extern s32 D_003EAD94;

void func_00B27B70(void) {
    if (D_003EAD94 != 0) {
        func_00B27090();
        func_00B26940();
        if (D_003EAD94 != 0) {
            func_0096DA00(D_003EAD94);
            D_003EAD94 = 0;
        }
        func_001D5C40(0x10313);
    }
}
