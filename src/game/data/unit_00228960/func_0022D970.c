/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_0053A810[];
s32 Pes6SaveData_GetUnavailableFlag(void);

static inline s32 is_busy(void) {
    return Pes6SaveData_GetUnavailableFlag() != 0;
}

u8 *func_0022D970(void) {
    if (is_busy() == 1) {
        return NULL;
    }
    return D_0053A810;
}
