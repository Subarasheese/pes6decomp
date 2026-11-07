/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 v[0x8B];
} Rec;

typedef struct {
    u8 pad0[0xC0];
    u8 v[5];
} Obj;

extern Rec D_00591A90[];

void func_0028C590(Obj *obj, s32 i) {
    u8 *dst = D_00591A90[i].v;

    dst[0] = obj->v[0];
    dst[1] = obj->v[1];
    dst[2] = obj->v[2];
    dst[3] = obj->v[3];
    dst[4] = obj->v[4];
}
