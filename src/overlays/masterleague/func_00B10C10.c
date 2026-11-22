/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
s32 SD_call(s32);
s32 func_00960FA0(s32);
extern void func_00B0ED30(void);

s32 func_00B10C10(void) {
    u32 value;

    value = func_00B15370();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, s16 *, 0xBFA) == 0)) {
        return 0;
    }
    func_00960FA0(1);
    func_00B0ED30();
    SD_call(0x84008401);
    return 0;
}
