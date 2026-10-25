/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 v[4]; } V4;
typedef struct { u8 pad[0x14]; f32 a; f32 b; } Sub;
typedef struct {
    Sub *sub;
    void *h;
} Obj;

extern void func_001EE5D0(void *, V4 *);

V4 *func_002E3780(Obj *o, V4 *out) {
    V4 t;
    if (o == 0 || out == 0) {
        return 0;
    }
    func_001EE5D0(o->h, &t);
    out->v[0] = t.v[0];
    out->v[1] = t.v[1];
    out->v[2] = o->sub->a;
    out->v[3] = o->sub->b;
    return out;
}
