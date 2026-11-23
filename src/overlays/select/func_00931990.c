/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 D_003EAA0C;
extern void func_00936170(void);
extern void func_0093CF50(void);
extern void func_00245DA0(void);
extern void func_008B5820(void);
extern void func_0093B7B0(void);
extern void func_0093A770(void);
extern void func_00939B30(void);
extern void func_0023FC70(void);
s32 func_00931990(void) {
    switch (D_003EAA0C) {
    case 0:
        func_00936170();
        break;
    case 1:
        func_0093CF50();
        break;
    case 4:
        func_00245DA0();
        break;
    case 5:
        func_008B5820();
        break;
    case 2:
        func_0093B7B0();
        break;
    case 3:
        func_0093A770();
        break;
    case 6:
        func_00939B30();
        break;
    case 9:
        func_0023FC70();
        break;
    case 8:
        func_0023FC70();
        break;
    default:
        func_0023FC70();
        break;
    }
    return 0;
}
