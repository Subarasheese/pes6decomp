/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    u8 pad0[4];
    f32 x;
    f32 y;
    u8 padC[0xC];
    s32 handle;
} Obj;

f32 func_001F3C60(s32);

Vec4 *func_002E4130(Obj *obj, Vec4 *out) {
    if (obj == NULL || out == NULL) {
        return NULL;
    }
    out->x = obj->x;
    out->y = obj->y;
    out->z = func_001F3C60(obj->handle);
    out->w = 0.0f;
    return out;
}
