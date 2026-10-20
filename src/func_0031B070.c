/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00333440(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00338930(void *);                      /* extern */
s32 func_003395B0(s32);                             /* extern */

s32 func_0031B070(void *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (func_00333440(0xC, 0, 1) != 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = func_003395B0(temp_s1);
    }
    func_00338930(arg0);
    return 1;
}
