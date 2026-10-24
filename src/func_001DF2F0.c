/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x74];
    u8 flags;
    u8 state;
} Obj76;

void func_001DF2F0(Obj76 *obj) {
    u8 state;

    if (obj == NULL) {
        return;
    }
    state = obj->state;
    if (!(state & 0x10)) {
        obj->state = state | 0x10;
        obj->flags |= 1;
    }
}
