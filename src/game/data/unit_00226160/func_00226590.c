/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[2]; u16 a : 7; u16 f : 4;
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

void func_00226590(s32 v) {
    Blk *p = get_block();

    if (Pes6SaveData_IsUnavailable() == 1) {
        return;
    }
    if (p != NULL) {
        p->f = v;
    }
}
