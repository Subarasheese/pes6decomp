/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} Vec4;

typedef struct {
    u8 active;
    u8 pad1[0x3];
    Vec4 vec;
} Obj14;

Vec4 *func_002E1540(Obj14 *obj, Vec4 *out) {
    if (obj->active == 0) {
        return NULL;
    }
    *out = obj->vec;
    return out;
}
