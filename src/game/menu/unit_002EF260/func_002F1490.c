/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    f32 x;
    f32 y;
} Vec2;

typedef struct {
    u8 active;
    u8 pad1;
    u8 mode;
    u8 pad3[5];
    Vec2 pos;
    s32 a;
    s32 b;
    f32 c;
    f32 d;
    s32 handle;
} Obj;

s32 func_002F1490(Obj *obj, Vec2 *v) {
    if (obj->active != 0) {
        obj->pos = *v;
        return 1;
    }
    return 0;
}
