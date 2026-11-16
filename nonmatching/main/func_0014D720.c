/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00376A80[];

s32 func_0014D720(void *arg0) {
    s32 i;
    u8 v = M2C_FIELD(arg0, u8 *, 0x19);

    for (i = 0; i < 5; i++) {
        if ((s32)v == D_00376A80[i]) {
            return i;
        }
    }
    return 0;
}
