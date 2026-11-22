/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 Pes6MatchFlow_GetState(s32);
extern u8 D_005926FD[];
extern u8 D_005926FF[];

s32 func_00BDA360(void) {
    if ((Pes6MatchFlow_GetState(0) & 0xFF) != 4) {
        return 0;
    }
    if (((Pes6MatchFlow_GetState(1) & 0xFF) == 0xE) && (D_005926FD[0] == 1) && (D_005926FF[0] == 0)) {
        return 1;
    }
    return 0;
}
