/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B070F0();                            /* extern */
M2C_UNK func_00B07860();                            /* extern */
extern s32 D_003EAD5C;

void func_00B08350(void) {
    if (D_003EAD5C != 0) {
        func_00B07860();
        func_00B070F0();
        if (D_003EAD5C != 0) {
            func_0096DA00(D_003EAD5C);
            D_003EAD5C = 0;
        }
        func_001D5C40(0x102B2);
    }
}
