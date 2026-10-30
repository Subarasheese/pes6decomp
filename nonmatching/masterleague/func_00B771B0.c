/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B73570();                            /* extern */
M2C_UNK func_00B73870();                            /* extern */
extern s32 D_003EAF08;

void func_00B771B0(void) {
    if (D_003EAF08 != 0) {
        func_00B73570();
        func_00B73870();
        if (D_003EAF08 != 0) {
            func_0096DA00(D_003EAF08);
            D_003EAF08 = 0;
        }
        func_001D5C40(0x1032E);
    }
}
