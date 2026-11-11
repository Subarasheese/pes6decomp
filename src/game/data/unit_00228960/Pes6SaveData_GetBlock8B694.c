/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *Pes6SaveData_Current;
s32 Pes6SaveData_IsUnavailable(void);

u8 *Pes6SaveData_GetBlock8B694(void) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (Pes6SaveData_Current != NULL) {
        return Pes6SaveData_Current + 0x8B694;
    }
    return NULL;
}
