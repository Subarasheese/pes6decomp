/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_0022F190(void);
s32 Pes6SaveData_IsUnavailable(void);

u8 *func_002297F0(s32 i) {
    u8 *q = func_0022F190();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (q == NULL) {
        return NULL;
    }
    if ((u8)i >= 37) {
        return NULL;
    }
    return q + (u8)i * 128 + 0x8A310;
}
