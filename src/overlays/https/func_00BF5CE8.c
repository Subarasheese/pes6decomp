/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_00BF5FA0(s32, void *, s32);

void func_00BF5CE8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_00BF5FA0(arg0, (void *)arg1, arg2);
    }
}
