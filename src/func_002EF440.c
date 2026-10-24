/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x, y; } V2;
typedef struct { f32 v[4]; } V4;
typedef struct {
    u8 pad0[2];
    u8 kind;
    u8 pad3[0x45];
    V4 box;
} Obj;

extern V2 D_003B3FE0[];

V4 *func_002EF440(Obj *o, s32 mode, V4 *out) {
    V2 t;
    if (o == 0 || out == 0) {
        return 0;
    }
    if (mode == 0) {
        *out = o->box;
    } else {
        t = D_003B3FE0[o->kind];
        out->v[0] = t.x;
        out->v[1] = t.y;
        out->v[2] = o->box.v[2];
        out->v[3] = o->box.v[3];
    }
    return out;
}
