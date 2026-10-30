/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B06000();                            /* extern */
M2C_UNK func_00B06210();                            /* extern */
extern s32 D_003EADE4;

void func_00B066A0(void) {
    if (D_003EADE4 != 0) {
        func_00B06210();
        func_00B06000();
        if (D_003EADE4 != 0) {
            func_0096DA00(D_003EADE4);
            D_003EADE4 = 0;
        }
        func_001D5C40(0x1032D);
    }
}
