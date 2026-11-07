/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[4];
    s32 handle;
    u8 pad8[0x74];
} Ent;

typedef struct {
    u8 pad0[0x7C];
    Ent ents[1];
} Obj;

s32 func_001F08B0(s32);
void func_001F1950(s32, s32);

void func_002138C0(Obj *obj, s32 i, s32 key) {
    s32 r = func_001F08B0(key);

    if (obj != NULL && r != 0) {
        func_001F1950(obj->ents[i].handle, r);
    }
}
