/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6MatchFlow_GetState(M2C_UNK);

s32 func_00BDA3E0(void) {
    if ((Pes6MatchFlow_GetState(0) & 0xFF) != 4) {
        return 0;
    }
    return (Pes6MatchFlow_GetState(1) & 0xFF) == 5;
}
