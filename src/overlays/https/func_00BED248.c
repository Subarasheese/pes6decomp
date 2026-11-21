/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

s32 func_00BED318(s32, s32 *, s32);
s32 func_00BF5D40(s32);

s32 func_00BED248(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00BF5D40(arg2);
    *arg1 = temp_v0;
    if (temp_v0 == 0) {
        return 0x206;
    }
    return func_00BED318(arg0, arg1, arg2);
}
