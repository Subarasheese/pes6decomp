/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0;
    u8 state;
    u8 pad2[0x46];
    u32 flags;
    u8 pad4C[8];
    s32 active;
} Obj;

void func_001F1770(Obj *obj) {
    if (obj == NULL) {
        return;
    }
    if (obj->active == 0) {
        return;
    }
    if (obj->flags & 0x10) {
        obj->flags &= ~0x10;
        obj->state |= 2;
    }
}
