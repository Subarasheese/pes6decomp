/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
s32 func_00AB38D0();                                /* extern */

s32 func_00ADA3C0(void *arg0, s32 arg1) {
    if (func_00AB38D0() != 4) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0xB4) & 0x200)) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 0x221) = (u8) (M2C_FIELD(arg0, u8 *, 0x221) | 4);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    if (arg1 != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0;
        func_00207390(M2C_FIELD(arg0, void **, 4), 2);
        M2C_FIELD(arg0, s8 *, 0x4E) = 0;
        M2C_FIELD(arg0, s16 *, 0x18) = 2;
    }
    return 1;
}
