/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[4]; u8 a : 6; u8 f : 1;
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

void Pes6Settings_Set_B04_b6_w1(s32 v) {
    Blk *p = get_block();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return;
    }
    if (p != NULL) {
        p->f = v;
    }
}
