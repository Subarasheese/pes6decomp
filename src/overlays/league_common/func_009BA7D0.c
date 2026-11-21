/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_009BC8E0(void);
s32 SD_call(s32);

s32 func_009BA7D0(void) {
    u32 value;

    value = func_009BC8E0();
    if (value == 0) {
        return 0;
    }
    M2C_FIELD(value, s8 *, 0x740) = 1;
    SD_call(0x84008401);
    return 0;
}
