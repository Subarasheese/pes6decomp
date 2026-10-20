/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00333440(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00338930(void *);                      /* extern */

s32 func_00370500(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x2C) != 0x1C) {
        func_00333440(0x70, 0, 1);
    }
    func_00338930(arg0);
    return 1;
}
