/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */

s32 func_003046F0(void) {
    if (((Pes6MatchFlow_GetState(1) & 0xFF) == 5) && ((Pes6MatchFlow_GetState(2) & 0xFF) < 5)) {
        return 1;
    }
    return 0;
}
