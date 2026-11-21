/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_008CC830(void);
s32 func_008CE2E0(s32);

s32 func_008CE760(void) {
    u32 value;

    value = func_008CC830();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x20C) != 1)) {
        return 0;
    }
    func_008CE2E0(-1);
    return 0;
}
