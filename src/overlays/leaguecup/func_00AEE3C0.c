/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
s32 SD_call(s32);

s32 func_00AEE3C0(void) {
    u32 value;

    value = func_00AEE570();
    if (value == 0) {
        return 0;
    }
    M2C_FIELD(value, s32 *, 0x404) = 2;
    SD_call(0x84008401);
    return 0;
}
