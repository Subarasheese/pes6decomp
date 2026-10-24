/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 v[4]; } V4;
typedef struct {
    u8 pad0[2];
    u8 kind;
    u8 pad3[0x15];
    V4 box;
} Obj;

extern s32 func_002F07A0(Obj *, V4 *, V4 *, s32, s32, s32, s32, s32);

s32 func_002EF590(Obj *o) {
    V4 t;
    if (o == 0) {
        return 1;
    }
    if (o->kind == 0) {
        t.v[0] = o->box.v[0] - 5.0f;
        t.v[1] = o->box.v[1];
        t.v[2] = 10.0f + o->box.v[2];
        t.v[3] = o->box.v[3];
        return func_002F07A0(o, &t, &o->box, 0, 0xFF, 0, 0x66, 0);
    }
    return func_002F07A0(o, &o->box, &o->box, 0, 0xFF, 0, 0x66, 0);
}
