/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00B0B5C0(s32, s32);
extern void func_00B0BE40(void);

void func_00B0D090(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        func_00B0BE40();
        break;
    case 1:
        func_00B0B5C0(arg0, arg2);
        return;
    default:
        return;
    }
}
