/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00B24010(M2C_UNK);
extern u8 D_00591DCC[];

void func_0087F240(s32 arg0) {
    M2C_UNK var_a0;

    if ((arg0 ^ D_00591DCC[0]) != 0) {
        var_a0 = 3;
    } else {
        var_a0 = 1;
    }
    func_00B24010(var_a0);
}
