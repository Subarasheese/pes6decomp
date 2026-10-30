/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AF0330(void);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AEF280();                            /* extern */
extern s32 D_003EADC8;

void func_00AF0D90(void) {
    if (D_003EADC8 != 0) {
        func_00AF0330();
        func_00AEF280();
        if (D_003EADC8 != 0) {
            func_0096DA00(D_003EADC8);
            D_003EADC8 = 0;
        }
        func_001D5C40(0x10322);
    }
}
