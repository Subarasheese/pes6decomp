/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *Pes6SaveData_Current;

s32 func_0094C770(void) {
    if (Pes6SaveData_Current != NULL) {
        return M2C_FIELD(Pes6SaveData_Current, s32 *, 0x4);
    }
    return 0;
}
