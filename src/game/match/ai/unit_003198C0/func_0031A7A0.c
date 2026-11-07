/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00333440(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00338930(void *);                      /* extern */
M2C_UNK func_00338940(M2C_UNK);                     /* extern */
s32 func_003395B0(s32);                             /* extern */

s32 func_0031A7A0(void *arg0) {
    s32 temp_s2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x40);
    if (func_00333440(0xD, 0, 1) != 0) {
        M2C_FIELD(temp_s1, s32 *, 4) = func_003395B0(temp_s2);
        func_00338940(0x80000011);
        func_00338940(0x8000000C);
        func_00338940(0x8000000E);
        func_00338940(0x80000006);
    }
    func_00338930(arg0);
    return 1;
}
