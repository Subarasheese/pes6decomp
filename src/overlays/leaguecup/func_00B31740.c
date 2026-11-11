/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 func_00B30A60(void);
extern void SD_call(s32);

s32 func_00B31740(void) {
    u32 temp_v0;

    temp_v0 = func_00B30A60();
    if (temp_v0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_v0, s8 *, 0xF1) = 1;
    M2C_FIELD(temp_v0, s8 *, 0xF0) = 0;
    SD_call(0x84008401);
    return 0;
}
