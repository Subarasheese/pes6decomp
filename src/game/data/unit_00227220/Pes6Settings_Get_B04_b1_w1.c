/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[4]; u8 a : 1; u8 f : 1;
} Blk;

extern u8 *Pes6SaveData_Current;
s32 Pes6SaveData_IsUnavailable(void);

static inline Blk *get_block(void) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    if (Pes6SaveData_Current != NULL) {
        return (Blk *)(Pes6SaveData_Current + 0x4770);
    }
    return NULL;
}

u8 Pes6Settings_Get_B04_b1_w1(void) {
    Blk *p = get_block();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return 0;
    }
    if (p == NULL) {
        return 0;
    }
    return p->f;
}
