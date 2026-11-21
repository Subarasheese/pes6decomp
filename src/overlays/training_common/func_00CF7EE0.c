/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001BE5B0(s32);
extern void func_00264690(s32, s32);
extern void func_002646B0(s32, s32);
extern s32 func_002646D0(s32);
s32 func_00264790(s32, s32);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
s32 func_00272800(s32);
s32 func_00CD7D40(s32);
s32 func_00CD7E20(s32);
s32 func_00CEC550(s32);
s32 func_00CF7C80(s32);
extern s32 D_003EB348;

s32 func_00CF7EE0(s32 arg0) {
    s32 value;
    u32 value2;

    value = 0;
    func_002648F0(arg0);
    func_002646B0(arg0, 1);
    value2 = func_002646D0(arg0) & 0xFF;
    switch (value2) {
    case 0:
        if (func_001BE5B0(0) != 0) {
            func_00264790(arg0, 1);
        }
        break;
    case 1:
        func_00272800(0x17);
        func_00CEC550(0x26);
        func_00264790(arg0, 2);
        break;
    case 2:
        func_00CF7C80(arg0);
        break;
    case 3:
        func_00264790(arg0, 4);
        break;
    case 4:
        value = D_003EB348;
        break;
    case 5:
        func_00CD7E20(arg0);
        break;
    case 6:
        func_00CD7D40(arg0);
        break;
    }
    func_002648E0(arg0);
    func_00264690(arg0, 1);
    return value;
}
