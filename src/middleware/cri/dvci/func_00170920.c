/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_0016D5C0(s32);
extern s32 func_0016D7A0(s32, s32, s32);

s32 func_00170920(s32 arg0) {
    s32 value1;
    s32 value2;
    func_0016D5C0(0x4700);
    value1 = func_0016D7A0(arg0, 0, 0);
    func_0016D5C0(0x4701);
    if (value1 < 0) {
        return 0;
    } else {
        func_0016D5C0(0x4800);
        value2 = func_0016D7A0(arg0, 0, 2);
        func_0016D5C0(0x4801);
        return (!((value2 < 0)) ? value2 : 0);
    }
}
