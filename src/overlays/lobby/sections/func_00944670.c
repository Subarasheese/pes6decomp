/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);
s32 func_0082C690(s32, s32);
s32 func_0082C840(s32);
s32 func_0082C920(s32);
extern s32 func_00836E20(void);
s32 func_009443B0(s32);

s32 func_00944670(void) {
    s32 value;

    value = func_00836E20();
    if (func_0082C2A0() == 0) {
        func_0082C920(0x68);
        func_0082C840(0x72);
        func_0082C690(0x72, 0);
        return 2;
    }
    return func_009443B0(value);
}
