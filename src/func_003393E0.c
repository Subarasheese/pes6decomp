/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0030DBA0();                                /* extern */
s32 func_0030F190();                                /* extern */
M2C_UNK func_00339160(void *);                      /* extern */

s32 func_003393E0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) + 1);
    if ((func_0030DBA0() != 0) && (func_0030F190() == 0)) {
        M2C_FIELD(temp_s0, s32 *, 0x3C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x3C) + 1);
        func_00339160(temp_s0);
    }
    return 0;
}
