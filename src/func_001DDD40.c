/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 value;
    s32 padC;
} Ent;

typedef struct {
    s32 id;
    u8 pad4[0x40];
    s32 b;
    s32 a;
} Obj;

extern Ent *D_0052AE18[];
s32 *func_001F4380(s32);
void func_001DDDA0(Ent *, s32);

void func_001DDD40(Obj *obj) {
    s32 id = obj->id;
    s32 *p = func_001F4380(id);
    Ent *ent;

    if (p != NULL) {
        id = *p;
    }
    ent = &D_0052AE18[0][id];
    ent->value = obj->a;
    func_001DDDA0(ent, obj->b);
}
