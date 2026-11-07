/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x48];
    s32 handle;
} Child;

typedef struct {
    s32 flags;
    u8 pad4[0x18];
    Child *child;
} Obj20;

void func_001ED990(s32, s32);

void func_002E1870(Obj20 *obj, s32 arg1) {
    s32 flags = obj->flags;

    if ((flags & 0xFF) == 0) {
        return;
    }
    if (flags & 0x100) {
        func_001ED990(obj->child->handle, arg1);
    } else {
        func_001ED990((s32)obj->child, arg1);
    }
}
