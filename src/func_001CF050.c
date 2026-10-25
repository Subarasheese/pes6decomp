/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s16 key;
    s16 count;
} Ent;

typedef struct {
    u8 pad0[0x10];
    Ent *ents;
} Obj;

s32 func_001CF050(Obj *obj) {
    Ent *ent = obj->ents;
    s32 sum = 0;
    s32 size = 6;

    while (ent->key != -1) {
        sum += ent->count;
        ent++;
    }
    size += sum * 3;
    return size * 16;
}
