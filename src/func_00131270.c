/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 t;
    f32 x;
    f32 y;
    f32 z;
} Key;

typedef struct {
    u8 pad0[0xA0];
    f32 ax;
    f32 ay;
    f32 az;
    u8 padAC[4];
    f32 bx;
    f32 by;
    f32 bz;
    u8 padBC[0xC];
    f32 span;
    f32 pos;
} Obj;

void func_00131270(Obj *obj, Key *keys, s32 i, f32 t) {
    Key *k = &keys[i];

    obj->ax = k[0].x;
    obj->ay = k[0].y;
    obj->az = k[0].z;
    obj->bx = k[1].x;
    obj->by = k[1].y;
    obj->bz = k[1].z;
    obj->span = k[1].t - k[0].t;
    obj->pos = t - k[0].t;
}
