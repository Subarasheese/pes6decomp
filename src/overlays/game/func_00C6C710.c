/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK SD_call(M2C_UNK);                     /* extern */

void func_00C6C710(void) {
    M2C_UNK var_a0;

    if (((s32) (func_00151EA0(2) & 0xFFFF) % 2) != 0) {
        var_a0 = 0x8C040017;
    } else {
        var_a0 = 0x8C040018;
    }
    SD_call(var_a0);
}
