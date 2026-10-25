/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 handle;
    u32 flags;
} Obj;

void func_00153FA0(s32);

void func_0021DAF0(Obj *obj) {
    u32 flags = obj->flags;

    if (flags & 1) {
        func_00153FA0(obj->handle);
        obj->flags = flags ^ 1;
    }
}
