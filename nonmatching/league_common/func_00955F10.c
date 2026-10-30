/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6590(void);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_001B65E0(M2C_UNK);                     /* extern */
M2C_UNK func_001B66C0(s32);                         /* extern */
extern s32 D_003EA8D8;
extern s32 D_003EA8DC;

void func_00955F10(s32 arg0) {
    D_003EA8D8 = arg0;
    if (arg0 != -1) {
        if (D_003EA8DC == 1) {
            func_001B65E0(0xFF);
        } else {
            func_001B6590();
        }
        if (D_003EA8D8 == 0) {
            func_001B6590();
            D_003EA8D8 = 0;
            D_003EA8DC = 0;
            func_001B6590();
            func_001B6460(0);
            return;
        }
        func_001B66C0(D_003EA8D8);
        func_001B6460(1);
    }
}
