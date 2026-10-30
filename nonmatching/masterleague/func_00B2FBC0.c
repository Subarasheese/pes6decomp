/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC780(void);
M2C_UNK func_002CAD40();                            /* extern */
M2C_UNK func_00957C70();                            /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B2FA00();                            /* extern */
M2C_UNK func_00B2FB20();                            /* extern */
extern s32 D_003EAE34;

void func_00B2FBC0(void) {
    if (D_003EAE34 != 0) {
        func_00B2FB20();
        func_00B2FA00();
        if (D_003EAE34 != 0) {
            func_0096DA00(D_003EAE34);
            D_003EAE34 = 0;
        }
        func_001FC780();
        func_002CAD40();
        func_00957C70();
    }
}
