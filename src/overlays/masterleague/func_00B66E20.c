/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B66CA0(void);
s32 SD_call(s32);

s32 func_00B66E20(void) {
    u32 value;

    value = func_00B66CA0();
    if (value == 0) {
        return 1;
    }
    if (!(M2C_FIELD(value, u8 *, 0x1C) == 1)) {
        return 0;
    }
    SD_call(0x84008401);
    return 1;
}
