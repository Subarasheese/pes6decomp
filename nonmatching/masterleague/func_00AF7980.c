/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AF1780(void);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AF1530();                            /* extern */
extern s32 D_003EADD0;

void func_00AF7980(void) {
    if (D_003EADD0 != 0) {
        func_00AF1780();
        func_00AF1530();
        if (D_003EADD0 != 0) {
            func_0096DA00(D_003EADD0);
            D_003EADD0 = 0;
        }
        func_001D5C40(0x1031D);
    }
}
