/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001FC780(s32);
extern void func_002CAD40(void);
extern void func_00957C70(void);
extern s32 func_0096DA00(s32);
extern void func_00B2FA00(void);
extern void func_00B2FB20(void);

extern s32 D_003EAE34;

void func_00B2FBC0(void) {
    if (D_003EAE34 != 0) {
        func_00B2FB20();
        func_00B2FA00();
        if (D_003EAE34 != 0) {
            func_0096DA00(D_003EAE34);
            D_003EAE34 = 0;
        }
        func_001FC780(0xB);
        func_002CAD40();
        func_00957C70();
    }
}
