/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
s32 func_00B44FE0(s32);

s32 func_00B44F40(void) {
    u32 value;

    value = func_00B45600();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x3B6) != 3)) {
        return 0;
    }
    func_00B44FE0(-1);
    return 0;
}
