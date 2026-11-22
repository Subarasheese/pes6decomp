/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
s32 func_00B62B00(s32, s32);

s32 func_00B62AB0(void) {
    u32 value;

    value = func_00B62380();
    if (value == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value, u8 *, 0x4BC) == 0)) {
        return 0;
    }
    func_00B62B00(0, -1);
    return 0;
}
