/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_009BC8E0(void);
s32 func_009BA850(void) {
    s32 value;
    u32 value2;

    value2 = func_009BC8E0();
    if (value2 == 0) {
        return 1;
    }
    value = 1;
    if (M2C_FIELD(value2, u8 *, 0x740) != 1) {
        value = 0;
    }
    return value;
}
