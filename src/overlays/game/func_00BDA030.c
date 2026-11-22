/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 Pes6MatchFlow_GetState(M2C_UNK);
extern u8 D_005926FD[];
extern u8 D_005926FF[];

s32 func_00BDA030(void) {
    s32 a;

    if ((Pes6MatchFlow_GetState(0) & 0xFF) == 4) {
        if ((Pes6MatchFlow_GetState(1) & 0xFF) == 0xE && D_005926FD[0] == 1 && D_005926FF[0] == 4) {
            a = 1;
        } else {
            a = 0;
        }
    } else {
        a = 0;
    }
    if (a == 1) {
        if ((Pes6MatchFlow_GetState(2) & 0xFF) == 0x10) {
            return 1;
        }
    }
    return 0;
}
