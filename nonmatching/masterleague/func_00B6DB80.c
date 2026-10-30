/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B6D580();                            /* extern */
M2C_UNK func_00B6DA30();                            /* extern */
extern s32 D_003EAEF4;

void func_00B6DB80(void) {
    if (D_003EAEF4 != 0) {
        func_00B6DA30();
        func_00B6D580();
        if (D_003EAEF4 != 0) {
            func_0096DA00(D_003EAEF4);
            D_003EAEF4 = 0;
        }
        func_001D5C40(0x10337);
        func_001D5C40(0x1033D);
    }
}
