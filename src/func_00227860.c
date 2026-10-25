/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[2];
    u8 a : 2;
    u8 f : 5;
} Blk;

extern u8 *D_003E77AC;
extern u8 D_00591BCA[];
s32 func_00231240(void);
void func_0023D9C0(void);

static inline Blk *get_block(void) {
    if (func_00231240() == 1) {
        return NULL;
    }
    if (D_003E77AC != NULL) {
        return (Blk *)(D_003E77AC + 0x4770);
    }
    return NULL;
}

s32 func_00227860(void) {
    Blk *p = get_block();
    s32 v;

    if (func_00231240() == 1) {
        return 0;
    }
    if (p == NULL) {
        return 0;
    }
    v = p->f;
    if (v == 18) {
        func_0023D9C0();
        v = D_00591BCA[0];
    }
    return v;
}
