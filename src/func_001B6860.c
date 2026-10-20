/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001EDBA0(s32, s32);                    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern s32 D_003E9900;
extern s32 D_003E9904;
extern s8 D_003E990C;

void func_001B6860(void) {
    if (D_003E9904 != 0) {
        func_001EDBA0(D_003E9900, D_003E9904);
        D_003E9904 = 0;
    }
    if (D_003E9900 != 0) {
        func_001EDD90(D_003E9900);
        D_003E9900 = 0;
    }
    D_003E990C = 0;
}
