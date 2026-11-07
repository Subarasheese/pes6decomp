/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 t;
    f32 v[4];
} Key;

typedef struct {
    u8 pad[0x80];
    f32 a[4];
    f32 b[4];
    u8 pad2[0x20];
    f32 span;
    f32 t;
} Obj;

void func_00131440(Obj *o, Key *keys, s32 i, f32 t) {
    Key *k = &keys[i];

    o->a[0] = k[0].v[0];
    o->a[1] = k[0].v[1];
    o->a[2] = k[0].v[2];
    o->a[3] = k[0].v[3];
    o->b[0] = k[1].v[0];
    o->b[1] = k[1].v[1];
    o->b[2] = k[1].v[2];
    o->b[3] = k[1].v[3];
    o->span = k[1].t - k[0].t;
    o->t = t - k[0].t;
}
