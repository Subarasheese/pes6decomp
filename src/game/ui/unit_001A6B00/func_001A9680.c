/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    u8 state;
    u8 pad9[0xB];
    s32 handle;
} Obj;

void func_00145590(s32);
void Pes6Heap_Free(s32);

void func_001A9680(s32 a, s32 b, Obj **ref) {
    Obj *obj = *ref;

    if (obj->handle == 0) {
        return;
    }
    func_00145590(obj->handle);
    Pes6Heap_Free(obj->handle);
    obj->handle = 0;
    obj->state = 3;
}
