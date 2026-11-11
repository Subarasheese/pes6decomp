/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *Pes6SaveData_Current;
s32 Pes6SaveData_IsUnavailable(void);

static inline u8 *get_block(void) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (Pes6SaveData_Current != NULL) {
        return Pes6SaveData_Current + 0x42A50;
    }
    return NULL;
}

u8 func_00225820(void) {
    u8 *p = get_block();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0xFF;
    }
    if (p == NULL) {
        return 0xFF;
    }
    return p[1];
}
