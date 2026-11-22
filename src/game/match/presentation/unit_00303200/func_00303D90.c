/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */
s32 func_00BF6280();                                /* extern */
extern char D_00CBCDE1[];

s32 func_00303D90(void) {
    if (((Pes6MatchFlow_GetState(1) & 0xFF) == 0xC) && (func_00BF6280() == 2) && ((*(u8 *)D_00CBCDE1) == 4)) {
        return 1;
    }
    return 0;
}
