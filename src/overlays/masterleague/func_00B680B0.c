/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B68690(void);
s32 SD_call(s32);

s32 func_00B680B0(void) {
    u32 value;

    value = func_00B68690();
    if (value == 0) {
        return 0;
    }
    M2C_FIELD(value, s32 *, 0x148) = 2;
    SD_call(0x84008401);
    return 0;
}
