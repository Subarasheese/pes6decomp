/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00AF3B30(void);
extern void SD_call(s32);

s32 func_00AF3FE0(void) {
    u32 temp_v0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_v0, s8 *, 0x8D) = 4;
    M2C_FIELD(temp_v0, s8 *, 0x8C) = 1;
    SD_call(0x84008401);
    return 0;
}
