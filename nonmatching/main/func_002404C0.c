/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC780(void);
extern s32 func_0017F900(void);
extern void func_00363BD0(void);
extern void func_001FC840(void);
s32 func_00240140(s8);                              /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002CABE0();                            /* extern */
M2C_UNK func_002CAC80();                            /* extern */
extern s8 D_003E9A90;
extern s32 D_003E9AB0;

void func_002404C0(void) {
    switch (D_003E9A90) {                           /* irregular */
    case 0:
        func_001FC780();
        if (D_003E9AB0 == 0) {
            func_001FC780();
            func_001FC780();
            func_001FC840();
            func_001FC840();
        }
        func_002CAC80();
        func_0026E840(0x82000014);
        D_003E9A90 += 1;
        /* fallthrough */
    case 1:
        if (func_0017F900() == 1) {
            D_003E9A90 += 1;
            return;
        }
        return;
    case 2:
        if (func_00240140(D_003E9A90) == 1) {
            func_002CABE0();
            func_00363BD0();
            D_003E9A90 = 0;
        }
        break;
    }
}
