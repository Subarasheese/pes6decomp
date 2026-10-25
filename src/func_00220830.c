/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    u8 a;
    u8 b;
} Sub;

typedef struct {
    u8 pad0[0x304];
    Sub sub;
} Cfg;

Cfg *func_00223BE0(void);

s32 func_00220830(s32 side) {
    Sub *sub = &func_00223BE0()->sub;

    if (side == 0) {
        if (sub->a != 1) {
            goto fail;
        }
        return 1;
    }
    if (sub->b != 1) {
        goto fail;
    }
    return 1;
fail:
    return 0;
}
