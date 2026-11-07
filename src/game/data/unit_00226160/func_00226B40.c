/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[5]; u8 a : 6; u8 f : 1;
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

u8 func_00226B40(void) {
    Blk *p = get_block();

    if (func_00231240() == 1) {
        return 0;
    }
    if (p == NULL) {
        return 0;
    }
    return p->f;
}
