/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B62590();                            /* extern */
M2C_UNK func_00B64380();                            /* extern */
extern s32 D_003EAECC;

void func_00B62460(void) {
    if (D_003EAECC != 0) {
        func_00B64380();
        func_00B62590();
        if (D_003EAECC != 0) {
            func_0096DA00(D_003EAECC);
            D_003EAECC = 0;
        }
        func_001D5C40(0x1033D);
        func_001D5C40(0x10327);
    }
}
