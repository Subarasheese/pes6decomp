/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_002260F0(s32);
s32 Pes6SaveData_IsUnavailable(void);

u8 func_002243B0(s32 id, s32 i) {
    u8 *p = func_002260F0(id);

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0xFF;
    }
    if (p == NULL) {
        return 0xFF;
    }
    if ((u8)i >= 32) {
        return 0xFF;
    }
    return p[(u8)i + 0x4B1];
}
