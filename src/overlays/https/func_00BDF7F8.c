/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00BDF848(void *, s32, s32);

s32 func_00BB8168(s32);

s32 func_00BDF7F8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00BB8168(arg1);
    if (temp_v0 == 0) {
        return -2;
    }
    return func_00BDF848(arg0, temp_v0, arg2);
}
