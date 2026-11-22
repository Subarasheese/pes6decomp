/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00AF7970(void);
s32 SD_call(s32);

s32 func_00AF1730(void) {
    u32 value;

    value = func_00AF7970();
    if (value == 0) {
        return 0;
    }
    M2C_FIELD(value, s32 *, 0x1AC) = 4;
    SD_call(0x84008401);
    return 0;
}
