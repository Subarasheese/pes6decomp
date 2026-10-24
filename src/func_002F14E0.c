/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    u8 active;
    u8 pad1;
    u8 mode;
    u8 pad3[5];
    f32 x;
    f32 y;
    s32 a;
    s32 b;
    f32 c;
    f32 d;
    s32 handle;
} Obj;

void func_001F17C0(s32);
void func_001F1770(s32);

s32 func_002F14E0(Obj *obj, u8 mode) {
    if (obj->active == 0) {
        return 0;
    }
    obj->mode = mode;
    if (obj->mode & 0x10) {
        func_001F17C0(obj->handle);
    } else {
        func_001F1770(obj->handle);
    }
    return 1;
}
