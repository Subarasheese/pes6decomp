/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */
s32 func_00BF6280();                                /* extern */

s32 func_00301330(void) {
    if (((Pes6MatchFlow_GetState(1) & 0xFF) == 0xC) && (func_00BF6280() != 0)) {
        return 1;
    }
    return 0;
}
