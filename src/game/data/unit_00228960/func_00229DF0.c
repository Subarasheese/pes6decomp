/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *Pes6SaveData_GetBlockE970(void);
s32 Pes6SaveData_IsUnavailable(void);

u8 *func_00229DF0(void) {
    u8 *p = Pes6SaveData_GetBlockE970();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (p == NULL) {
        return NULL;
    }
    return p + 0xA680;
}
