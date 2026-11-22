/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
s32 Pes6MatchFlow_GetState(M2C_UNK);
extern char D_005926FD[];
extern char D_005926FF[];
s32 func_00BDA260(void) {
    if ((Pes6MatchFlow_GetState(0) & 0xFF) != 4) return 0;
    if ((Pes6MatchFlow_GetState(1) & 0xFF) == 0xE && (*(u8 *)D_005926FD) == 1 && (*(u8 *)D_005926FF) == 5) return 1;
    return 0;
}
