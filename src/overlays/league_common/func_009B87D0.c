/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_009B84D0(void);
s32 func_002F5A50(s32);

s32 func_009B87D0(void) {
    u32 value;
    u32 value2;

    value = func_009B84D0();
    if (value == 0) {
        return 0;
    }
    if (M2C_FIELD(value, u8 *, 0x28) != 0) {
        return 0;
    }
    value2 = func_009B84D0();
    if ((value2 != 0) && (M2C_FIELD(value2, u8 *, 0x28) == 0)) {
        func_002F5A50(M2C_FIELD(value2, s32 *, 0x3C));
    }
    return 0;
}
