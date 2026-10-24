/* compiler: mwcc-3.0.1b151 */
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

void func_001EEAC0(s32);

s32 func_002F1720(Obj *obj) {
    if (obj->active == 2) {
        func_001EEAC0(obj->handle);
        return 1;
    }
    return 0;
}
