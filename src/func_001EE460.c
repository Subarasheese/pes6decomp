/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    u8 pad0[0x110];
    Vec3 value;
} Obj;

void func_001EE460(Obj *obj, Vec3 *out) {
    s32 ok;

    if (obj != NULL && out != NULL) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    *out = obj->value;
}
