/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6Scene_Get(M2C_UNK);                         /* extern */
extern u8 Pes6Demo_Kind;

s32 func_00360B00(void) {
    if ((Pes6Scene_Get(0) == 0xC) && (Pes6Demo_Kind == 0)) {
        return 1;
    }
    return 0;
}
