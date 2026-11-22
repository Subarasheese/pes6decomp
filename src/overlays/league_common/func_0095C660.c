/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *Pes6SaveData_GetBlockE970(void);
s32 func_0095C660(void) {
    void *temp_v0;

    temp_v0 = Pes6SaveData_GetBlockE970();
    if (temp_v0 == NULL) {
        return 0x1388;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x325A8);
}
