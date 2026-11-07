/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0;
    u8 index;
} Ent;

typedef struct {
    u8 pad0[0x18];
    s32 *items;
} Sub;

typedef struct {
    u8 pad0[0x2C];
    Sub *sub;
} Obj;

Ent *func_001D61A0(Obj *, s32, s32);

s32 func_001D6CD0(Obj *obj, s32 key) {
    Ent *ent;

    if (obj == NULL) {
        return 0;
    }
    ent = func_001D61A0(obj, 1, key);
    if (ent == NULL) {
        return 0;
    }
    return obj->sub->items[ent->index];
}
