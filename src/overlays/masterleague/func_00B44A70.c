/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B49760(void);
s32 SD_call(s32);

s32 func_00B44A70(void) {
    u32 value;

    value = func_00B49760();
    if (value == 0) {
        return 1;
    }
    if (!(M2C_FIELD(value, u8 *, 0xC) == 1)) {
        return 0;
    }
    SD_call(0x84028400);
    return 1;
}
