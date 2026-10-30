/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090BA30();                            /* extern */
M2C_UNK func_00970590(void *);                      /* extern */
s32 func_00A07B40();                                /* extern */
s32 func_00A0DD50(void *);                          /* extern */
M2C_UNK func_00C6A440(void *);                      /* extern */

void func_0098BE90(void *arg0) {
    u8 temp_v0;
    u8 temp_v0_2;

    func_0090BA30();
    M2C_FIELD(arg0, s8 *, 0x201) = 4;
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x1DE);
    if (temp_v0 == 0) {
        M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (temp_v0 + 1);
        M2C_FIELD(arg0, s8 *, 0x20F) = 0;
        M2C_FIELD(arg0, s8 *, 0x210) = 0;
        M2C_FIELD(arg0, u8 *, 0x20E) = 0U;
    }
    temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x20E);
    if ((s32) temp_v0_2 > 0) {
        M2C_FIELD(arg0, u8 *, 0x20E) = (u8) (temp_v0_2 - 1);
    }
    if ((func_00A0DD50(arg0) != 0) && (func_00A07B40() != 0)) {
        func_00970590(arg0);
    } else {
        func_00C6A440(arg0);
    }
}
