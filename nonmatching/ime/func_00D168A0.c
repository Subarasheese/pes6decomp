/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern s32 func_0021DF90(s32);
extern s32 func_0017F900(void);
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E7610(s32);                         /* extern */
M2C_UNK func_001F0590(s32);                         /* extern */
extern s32 D_003EB34C;

s32 func_00D168A0(void) {
    switch (D_003EB34C) {                           /* irregular */
    case 0:
        func_001E7610(func_0021E000(0x164U));
        func_001F0590(func_0021DF90(0x1B));
        func_001D5F80(0x103D6);
        D_003EB34C += 1;
        /* fallthrough */
    case 1:
        if (func_0017F900() != 0) {
            D_003EB34C = 0;
            return 1;
        }
    default:
        return 0;
    }
}
