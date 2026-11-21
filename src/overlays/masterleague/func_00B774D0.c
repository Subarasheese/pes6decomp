/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B772F0(void);
s32 SD_call(s32);

s32 func_00B774D0(void) {
    u32 value;

    value = func_00B772F0();
    if (value == 0) {
        return 0;
    }
    M2C_FIELD(value, s32 *, 0x44) = 1;
    SD_call(0x84008401);
    return 0;
}
