/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009AACF0();                            /* extern */
M2C_UNK func_009AAEA0();                            /* extern */
extern s32 D_003EA9A4;

void func_009AB770(void) {
    if (D_003EA9A4 != 0) {
        func_009AACF0();
        func_009AAEA0();
        if (D_003EA9A4 != 0) {
            func_0096DA00(D_003EA9A4);
            D_003EA9A4 = 0;
        }
        func_001D5C40(0x102AC);
    }
}
