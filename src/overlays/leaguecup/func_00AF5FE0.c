/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001FC780(s32);
extern void func_002CAD40(void);
extern s32 func_0096DA00(s32);
extern void func_00AF6200(void);
extern s32 func_00D13B90(void);
extern s32 func_00D13BE0(void);

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
        func_001FC780(0xB);
        func_002CAD40();
    }
}
