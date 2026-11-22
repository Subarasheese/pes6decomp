/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

s32 *func_00C043E8(s32);
s32 func_00BD7240(s32);

s32 func_00BD7200(s32 arg0) {
    s32 temp_a0;

    temp_a0 = (u32)(arg0 + 1) < 2U;
    if (temp_a0 != 0) {
        return func_00BD7240(*func_00C043E8(temp_a0));
    }
    return 0;
}
