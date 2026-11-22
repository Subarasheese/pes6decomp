/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B6DB70(void);
s32 SD_call(s32);

s32 func_00B6D980(void) {
    u32 value;

    value = func_00B6DB70();
    if (value == 0) {
        return 0;
    }
    M2C_FIELD(value, s32 *, 0x64) = 2;
    SD_call(0x84008401);
    return 0;
}
