/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B77B10(void);
s32 func_00B78B90(s32);

s32 func_00B78AF0(void) {
    u32 value;

    value = func_00B77B10();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x319) != 2)) {
        return 0;
    }
    func_00B78B90(1);
    return 0;
}
