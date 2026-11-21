/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
s32 func_00B4A010(s32);
s32 func_00B4A1D0(s32);

s32 func_00B49F30(void) {
    u32 value;

    value = func_00B490A0();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x319) != 3)) {
        return 0;
    }
    if (M2C_FIELD(value, u8 *, 0x5C4) == 1) {
        func_00B4A1D0(1);
    } else {
        func_00B4A010(1);
    }
    return 0;
}
