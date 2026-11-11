/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
extern s32 *D_003AE9D0[];

s32 func_00CF6CC0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    SD_call(0x84028400);
    func_00C99AD0(*D_003AE9D0[0], arg2);
    return 2;
}
