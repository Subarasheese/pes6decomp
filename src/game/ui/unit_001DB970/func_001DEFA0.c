/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2;

typedef struct {
    u8 pad0[0x2C];
    Vec2 pos;
} Obj34;

void func_001DEFA0(Obj34 *obj, Vec2 *out) {
    if (obj == NULL) {
        return;
    }
    if (out == NULL) {
        return;
    }
    *out = obj->pos;
}
