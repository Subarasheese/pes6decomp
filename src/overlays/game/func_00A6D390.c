/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_00A427F0(void *, s32);                         /* extern */

s32 func_00A6D390(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x400) {
        if (func_00A427F0(arg0, 1) != 0) {
            return 1;
        }
        goto block_3;
    }
block_3:
    return 0;
}
