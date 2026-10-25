/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[2]; u8 f : 1;
} Blk;

extern u8 *D_003E77AC;
s32 func_00231240(void);

static inline Blk *get_block(void) {
    if (func_00231240() == 1) {
        return NULL;
    }
    if (D_003E77AC != NULL) {
        return (Blk *)(D_003E77AC + 0x4770);
    }
    return NULL;
}

void func_002279F0(s32 v) {
    Blk *p = get_block();

    if (func_00231240() == 1) {
        return;
    }
    if (p != NULL) {
        p->f = v;
    }
}
