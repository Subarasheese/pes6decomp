/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *Pes6SaveData_GetBlockE970(void);
s32 Pes6SaveData_IsUnavailable(void);

static inline u8 *get_b2(void) {
    u8 *q = Pes6SaveData_GetBlockE970();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (q == NULL) {
        return NULL;
    }
    return q + 0xA680;
}

u8 func_00229870(void) {
    u8 *p;

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    p = get_b2();
    if (p == NULL) {
        return 0;
    }
    return *(u8 *)(p + 3);
}
