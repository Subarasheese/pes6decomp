/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */
M2C_UNK func_00905640();                            /* extern */
M2C_UNK func_00908CF0(s32);                         /* extern */

s32 func_00908CB0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    SD_call(0x84028400);
    func_00908CF0(arg3);
    func_00905640();
    return 2;
}
