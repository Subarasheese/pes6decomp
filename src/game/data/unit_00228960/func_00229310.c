/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *Pes6SaveData_Current;
s32 Pes6SaveData_IsUnavailable(void);

static inline u8 *get_block(void) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (Pes6SaveData_Current != NULL) {
        return Pes6SaveData_Current + 0x7980;
    }
    return NULL;
}

u8 *func_00229310(void) {
    u8 *p = get_block();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (p == NULL) {
        return NULL;
    }
    return p + 0x624E;
}
