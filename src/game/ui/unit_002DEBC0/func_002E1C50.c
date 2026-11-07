/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 flags;
    u8 pad4[0x18];
    s32 handle;
} Obj20;

void func_001F3D10(s32, s32);
void func_001EDAE0(s32, s32);

void func_002E1C50(Obj20 *obj, s32 arg1) {
    s32 flags = obj->flags;

    if ((flags & 0xFF) == 0) {
        return;
    }
    if (flags & 0x100) {
        func_001F3D10(obj->handle, arg1);
    } else {
        func_001EDAE0(obj->handle, arg1);
    }
}
