/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    u8 pad0[0x20];
    f32 z;
    f32 w;
} Obj;

void func_002DF0A0(Obj *, Vec4 *);

void func_002DF640(Obj *obj, f32 x, f32 y) {
    Vec4 v;

    if (obj != NULL) {
        v.x = x;
        v.y = y;
        v.z = obj->z;
        v.w = obj->w;
        func_002DF0A0(obj, &v);
    }
}
