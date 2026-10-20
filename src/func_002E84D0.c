/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_002211C0();                              /* extern */
M2C_UNK func_002E8560();                            /* extern */
s32 func_002E9250();                                /* extern */
s32 func_002E9360();                                /* extern */
extern s16 D_003E9E38;
extern s16 D_003E9E3A;

s32 func_002E84D0(void) {
    s32 var_s0;

    var_s0 = 0;
    func_002E8560();
    if (!(func_002E9250() & 0xFF) && (func_002E9360() != 0) && (M2C_FIELD(func_002211C0(), u8 *, 0x14) == 1) && (D_003E9E38 != -1) && (D_003E9E3A != -1)) {
        var_s0 = 1;
    }
    return var_s0;
}
