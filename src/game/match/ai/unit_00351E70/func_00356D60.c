/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00338930(s32);                         /* extern */
M2C_UNK func_00354E30(u8);                          /* extern */
extern u8 D_003E9F94;

s32 func_00356D60(s32 arg0) {
    func_00354E30(D_003E9F94);
    func_00338930(arg0);
    D_003E9F94 = 0;
    return 1;
}
