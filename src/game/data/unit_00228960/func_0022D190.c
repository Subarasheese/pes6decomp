/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0053A7D0[][32];
s32 Pes6SaveData_GetUnavailableFlag(void);

static inline s32 is_busy(void) {
    return Pes6SaveData_GetUnavailableFlag() != 0;
}

u8 func_0022D190(s32 a, s32 b) {
    if (is_busy() == 1) {
        return 4;
    }
    return D_0053A7D0[(u8)a][(u8)b];
}
