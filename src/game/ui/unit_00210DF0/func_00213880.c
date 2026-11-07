/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    s32 z;
    s32 w;
} Vec4;

typedef struct {
    u8 pad0[0x590];
    s32 handle;
} Obj;

void func_001F3D80(s32, Vec4 *, s32);

void func_00213880(Obj *obj, f32 x, f32 y) {
    Vec4 v;

    if (obj != NULL) {
        v.x = x;
        v.z = 0;
        v.y = y;
        v.w = 0;
        func_001F3D80(obj->handle, &v, 0);
    }
}
