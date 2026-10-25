/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { f32 v[4]; } __attribute__((aligned(16))) QVec;

typedef struct Obj {
    u8 pad[0x20];
    QVec pos;
    u8 pad2[0x3A - 0x30];
    u8 flags;
} Obj;

void func_001EDA50(Obj *o, QVec *v) {
    if (o == NULL || v == NULL) return;
    if (o->pos.v[0] == v->v[0] && o->pos.v[1] == v->v[1] &&
        o->pos.v[2] == v->v[2] && o->pos.v[3] == v->v[3]) {
    } else {
        o->pos = *v;
        o->flags |= 1;
    }
}
