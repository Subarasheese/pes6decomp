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
    u8 pad1[0xF];
    Vec4 v;
} Obj;

Vec4 *func_002F17C0(Obj *obj, Vec4 *out) {
    if (obj->active != 0) {
        *out = obj->v;
        return out;
    }
    return NULL;
}
