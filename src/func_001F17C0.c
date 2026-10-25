/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 unk0;
    u8 flags;
    u8 pad2[0x46];
    s32 state;
    u8 pad4C[0x8];
    s32 enabled;
} Obj58;

void func_001F17C0(Obj58 *obj) {
    s32 state;

    if (obj == NULL) {
        return;
    }
    if (obj->enabled == 0) {
        return;
    }
    state = obj->state;
    if (!(state & 0x10)) {
        obj->state = state | 0x10;
        obj->flags |= 2;
    }
}
