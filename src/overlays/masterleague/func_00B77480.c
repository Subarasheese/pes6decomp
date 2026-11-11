/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 func_00B772F0(void);
extern void SD_call(s32, u8);

s32 func_00B77480(void) {
    u32 temp_v0;
    u8 temp_a1;

    temp_v0 = func_00B772F0();
    if (temp_v0 == 0) {
        return 0;
    }
    temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x40);
    M2C_FIELD(temp_v0, s32 *, 0x44) = (s32) (temp_a1 + 2);
    SD_call(0x84028400, temp_a1);
    return 0;
}
