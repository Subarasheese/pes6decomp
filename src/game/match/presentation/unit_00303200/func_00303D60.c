/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */

s32 func_00303D60(void) {
    return (Pes6MatchFlow_GetState(2) & 0xFF) >= 4;
}
