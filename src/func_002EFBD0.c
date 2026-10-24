/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x, y; } V2;
typedef struct { f32 v[4]; } V4;
typedef struct {
    u8 pad0[2];
    u8 kind;
    u8 pad3[5];
    V4 box;
} Obj;

extern V2 D_003B3FE0[];

void func_002EFBD0(Obj *o, V4 *src) {
    V2 t;
    f32 a;
    f32 b;
    if (o == 0) {
        return;
    }
    o->box = *src;
    t = D_003B3FE0[o->kind];
    a = 2.0f * t.x;
    if (a > o->box.v[2]) {
        o->box.v[2] = a;
    }
    b = 2.0f * t.y;
    if (b > o->box.v[3]) {
        o->box.v[3] = b;
    }
}
