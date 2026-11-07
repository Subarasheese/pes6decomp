/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    s32 handle;
    s32 pad4;
    Vec4 v;
} Obj;

void func_001E5A30(s32);

void func_001B9B00(Obj *obj, Vec4 *v) {
    obj->v = *v;
    func_001E5A30(obj->handle);
}
