/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CADA0(void);
extern void func_001FC840(void);
extern void func_001FC780(void);
M2C_UNK func_00B2FA50();                            /* extern */
extern s32 D_003EAE34;

void func_00B2FD70(void) {
    if (D_003EAE34 != 0) {
        func_001FC780();
        func_002CADA0();
        func_001FC840();
        func_00B2FA50();
    }
}
