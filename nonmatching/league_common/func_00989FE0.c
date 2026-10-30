/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009884F0();                            /* extern */
M2C_UNK func_00989290();                            /* extern */
extern s32 D_003EA978;

void func_00989FE0(void) {
    if (D_003EA978 != 0) {
        func_00989290();
        func_009884F0();
        if (D_003EA978 != 0) {
            func_0096DA00(D_003EA978);
            D_003EA978 = 0;
        }
        func_001D5C40(0x102A3);
    }
}
