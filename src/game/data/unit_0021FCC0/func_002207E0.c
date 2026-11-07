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

void func_002207E0(s32 side, s32 v) {
    Sub *sub = &func_00223BE0()->sub;
    u8 on = v == 1;

    if (side == 0) {
        sub->a = on;
    } else {
        sub->b = on;
    }
}
