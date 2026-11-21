/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B10D20(void);
s32 func_00AE8190(s32);

s32 func_00AEB970(void) {
    u32 value;

    value = func_00B10D20();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x9C) != 0)) {
        return 0;
    }
    func_00AE8190(M2C_FIELD(value, s32 *, 0x58));
    return 0;
}
