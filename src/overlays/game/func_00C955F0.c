/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */
s32 func_00B789F0();                                /* extern */

void func_00C955F0(void) {
    M2C_UNK var_a0;

    if (func_00B789F0() != 0) {
        var_a0 = 0x84050026;
    } else {
        var_a0 = 0x84050025;
    }
    SD_call(var_a0);
}
