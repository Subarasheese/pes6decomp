/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_00224E20(void);
s32 Pes6SaveData_IsUnavailable(void);

u8 *func_00223C10(void) {
    u8 *obj = func_00224E20();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (obj == NULL) {
        return NULL;
    }
    return obj + 0x10;
}
