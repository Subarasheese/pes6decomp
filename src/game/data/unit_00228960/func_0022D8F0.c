/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s16 D_003E9A14;
s32 Pes6SaveData_GetUnavailableFlag(void);

static inline s32 is_busy(void) {
    return Pes6SaveData_GetUnavailableFlag() != 0;
}

void func_0022D8F0(s32 v) {
    if (is_busy() == 1) {
        return;
    }
    D_003E9A14 = v;
}
