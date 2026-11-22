/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
s32 func_00AEA520(s32);
s32 func_00AEA700(s32);

s32 func_00AEA4B0(void) {
    u32 value;

    value = func_00AE3240();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x3DB5) == 0)) {
        return 0;
    }
    if (M2C_FIELD(value, s32 *, 0x59F4) == 1) {
        func_00AEA520(1);
    } else {
        func_00AEA700(1);
    }
    return 0;
}
