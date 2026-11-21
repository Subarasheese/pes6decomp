/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B30940(void);
s32 SD_call(s32);
s32 func_00B30090(s32);

s32 func_00B30480(void) {
    s32 value;
    u32 value2;

    value2 = func_00B30940();
    if (value2 == 0) {
        return 0;
    }
    if (!(M2C_FIELD(value2, u8 *, 0x8C) == 1)) {
        return 0;
    }
    value = M2C_FIELD(value2, u8 *, 0x9A) + 1;
    M2C_FIELD(value2, u8 *, 0x9A) = (u8)(value % 3);
    func_00B30090(value);
    SD_call(0x8400F803);
    return 0;
}
