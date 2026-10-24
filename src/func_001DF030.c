/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} Vec4;

typedef struct {
    u8 pad0[0x1C];
    Vec4 vec;
} Obj2C;

void func_001DF030(Obj2C *obj, Vec4 *out) {
    if (obj == NULL) {
        return;
    }
    if (out == NULL) {
        return;
    }
    *out = obj->vec;
}
