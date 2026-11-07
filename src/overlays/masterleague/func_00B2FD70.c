/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002CADA0(void);
extern void func_001FC840(s32);
extern void func_001FC780(s32);
M2C_UNK func_00B2FA50();                            /* extern */
extern s32 D_003EAE34;

void func_00B2FD70(void) {
    if (D_003EAE34 != 0) {
        func_001FC780(0xB);
        func_002CADA0();
        func_001FC840(0x23);
        func_00B2FA50();
    }
}
