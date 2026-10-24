/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00223A80(void);

s32 func_002EDDF0(s32 mode) {
    u8 first = M2C_FIELD(func_00223A80(), u8 *, 4);
    s32 second = M2C_FIELD(func_00223A80(), u8 *, 5);
    s32 total = second + ((first & 0xFF) << 1);
    s32 result = (100 - (total & 0xFF)) & 0xFF;

    if (mode == 0) {
        result = ((u32)(result & 0xFF) >> 1) & 0xFF;
    }
    return result;
}
