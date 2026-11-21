/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

s32 *func_001C1AE8(s32);
s32 func_00BD71A8(s32);

s32 func_00BD7168(s32 arg0) {
    s32 temp_a0;

    temp_a0 = (u32)(arg0 + 1) < 2U;
    if (temp_a0 != 0) {
        return func_00BD71A8(*func_001C1AE8(temp_a0));
    }
    return 0;
}
