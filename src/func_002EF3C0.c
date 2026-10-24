/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 v[4]; } V4;
typedef struct {
    u8 pad[0x38];
    f32 px;
    f32 py;
    f32 w;
    f32 h;
} Obj;

V4 *func_002EF3C0(Obj *o, s32 mode, V4 *out) {
    if (o == 0 || out == 0) {
        return 0;
    }
    out->v[0] = o->w - 17.0f;
    out->v[1] = 9.0f;
    out->v[2] = 8.0f;
    out->v[3] = o->h - 18.0f;
    if (mode == 0) {
        out->v[0] += o->px;
        out->v[1] += o->py;
    }
    return out;
}
