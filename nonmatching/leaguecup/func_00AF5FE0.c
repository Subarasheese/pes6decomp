/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC780(void);
M2C_UNK func_002CAD40();                            /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AF6200();                            /* extern */
M2C_UNK func_00D13B90();                            /* extern */
M2C_UNK func_00D13BE0();                            /* extern */
extern s32 D_003EAD50;

void func_00AF5FE0(void) {
    if (D_003EAD50 != 0) {
        func_00D13BE0();
        func_00D13B90();
        func_00AF6200();
        if (D_003EAD50 != 0) {
            func_0096DA00(D_003EAD50);
            D_003EAD50 = 0;
        }
        func_001FC780();
        func_002CAD40();
    }
}
