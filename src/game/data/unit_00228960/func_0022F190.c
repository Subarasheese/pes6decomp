/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *Pes6SaveData_Current;
s32 Pes6SaveData_GetUnavailableFlag(void);

static inline s32 is_busy(void) {
    return Pes6SaveData_GetUnavailableFlag() != 0;
}

void *func_0022F190(void) {
    if (is_busy() == 1) {
        return NULL;
    }
    return Pes6SaveData_Current;
}
