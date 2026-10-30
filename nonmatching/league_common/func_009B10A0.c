/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009B06E0();                            /* extern */
M2C_UNK func_009B0890();                            /* extern */
extern s32 D_003EA9AC;

void func_009B10A0(void) {
    if (D_003EA9AC != 0) {
        func_009B06E0();
        func_009B0890();
        if (D_003EA9AC != 0) {
            func_0096DA00(D_003EA9AC);
            D_003EA9AC = 0;
        }
        func_001D5C40(0x102AA);
    }
}
