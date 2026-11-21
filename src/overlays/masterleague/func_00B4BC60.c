/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
s32 func_00B4BCC0(s32, s32);

s32 func_00B4BC60(void) {
    u32 value;

    value = func_00B4DFD0();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x34C) == 0)) {
        return 0;
    }
    if (M2C_FIELD(value, u8 *, 0x34D) == 1) {
        func_00B4BCC0(0, -1);
    }
    return 0;
}
