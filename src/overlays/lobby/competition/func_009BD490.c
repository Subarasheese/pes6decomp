/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 state;
    s32 x4;
    u8 pad8[0xD];
    u8 x15;
} SL;

void func_0099E920(s32);

static inline void set_state(SL *p, s32 s) {
    if (p != NULL) {
        p->state = s;
        p->x15 = 1;
    }
}

s32 func_009BD490(SL *arg0) {
    if (arg0 == NULL) {
        return 5;
    }
    if (arg0->state != 0xA) {
        return 5;
    }
    func_0099E920(arg0->x4);
    set_state(arg0, 2);
    set_state(arg0, 0xB);
    return 0;
}
