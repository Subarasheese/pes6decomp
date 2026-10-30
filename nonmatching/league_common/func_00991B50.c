/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
s32 func_00210DF0();                                /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009911B0();                            /* extern */
M2C_UNK func_009917B0();                            /* extern */
extern s32 D_003EA97C;

void func_00991B50(void) {
    if (D_003EA97C != 0) {
        func_009917B0();
        func_009911B0();
        if (D_003EA97C != 0) {
            func_0096DA00(D_003EA97C);
            D_003EA97C = 0;
        }
        func_001D5C40(0x102A6);
        if (func_00210DF0() == 2) {
            func_001D5C40(0x10329);
        }
    }
}
