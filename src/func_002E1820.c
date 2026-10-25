/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x48];
    s32 handle;
} Sub;

typedef struct {
    u32 flags;
    u8 pad4[0x18];
    Sub *sub;
} Obj;

void func_001ED8F0(void *, s32);

void func_002E1820(Obj *obj, s32 arg) {
    u32 flags = obj->flags;

    if ((u8)flags == 0) {
        return;
    }
    if (flags & 0x100) {
        func_001ED8F0((void *)obj->sub->handle, arg);
    } else {
        func_001ED8F0(obj->sub, arg);
    }
}
