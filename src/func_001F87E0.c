/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00152130(s32, s32);
extern void func_001BE4D0(s32);
extern s32 func_001BE790(void);
extern void func_001BE800(void);

void func_001F87E0(s32 a0, s32 a1) {
    switch (a0) {
    case 0:
        func_001BE4D0(a1 & 0xFF);
        return;
    default:
    case 1:
        if (func_001BE790() != 0) {
            func_001BE800();
        } else {
            func_00152130(a0, a1);
        }
        return;
    }
}
