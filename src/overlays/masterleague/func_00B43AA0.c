/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Random_Below(M2C_UNK);
extern s32 D_003EAE6C;

s32 func_00B43AA0(void) {
    if (D_003EAE6C == 0) {
        return 0;
    }
    return ((Pes6Random_Below(0x8C) & 0xFFFF) + 0x40) & 0xFFFF;
}
