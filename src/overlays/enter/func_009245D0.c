/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001EE790(s32, s32);
s32 func_001EEAC0(s32, s32);
s32 func_001EF900(s32, s32);
s32 func_0020B730(s32, s32 *, s32);
s32 func_002F96F0(s32, s32);
s32 func_002FA280(s32, s32, s32, s32, s32);
extern s32 D_003EA5E4;
extern s32 *D_003EA5E8[2];

void func_009245D0(s32 arg0, s32 unused1, s32 arg2, s32 arg3) {
    s32 localValue1;
    s32 value;

    value = func_002F96F0(*D_003EA5E8[D_003EA5E4], 0);
    func_001EEAC0(arg0, func_0020B730(0xA, &localValue1, 0));
    func_001EE790(arg0, localValue1);
    func_001EF900(arg0, 1);
    if (value != 0) {
        func_002FA280(arg0, value, arg2, arg3, 0);
    }
}
