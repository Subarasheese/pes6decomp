/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B2F550();                            /* extern */
M2C_UNK func_00B2FCC0();                            /* extern */
extern s32 D_003EAD9C;

void func_00B30860(void) {
    if (D_003EAD9C != 0) {
        func_00B2FCC0();
        func_00B2F550();
        if (D_003EAD9C != 0) {
            func_0096DA00(D_003EAD9C);
            D_003EAD9C = 0;
        }
        func_001D5C40(0x10315);
    }
}
