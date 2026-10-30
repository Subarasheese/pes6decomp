/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BA6B0();                            /* extern */
M2C_UNK func_009BA810();                            /* extern */
extern s32 D_003EA9C0;

void func_009BC8F0(void) {
    if (D_003EA9C0 != 0) {
        func_009BA810();
        func_009BA6B0();
        if (D_003EA9C0 != 0) {
            func_0096DA00(D_003EA9C0);
            D_003EA9C0 = 0;
        }
        func_001D5C40(0x102A7);
    }
}
