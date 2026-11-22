/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BF6280(void);
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */

s32 func_00BD9960(void) {
    if ((Pes6MatchFlow_GetState(1) & 0xFF) == 0xC && func_00BF6280() == 0xB && (Pes6MatchFlow_GetState(3) & 0xFF) == 3) {
        return 1;
    }
    return 0;
}
