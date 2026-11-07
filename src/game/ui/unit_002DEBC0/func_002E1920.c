/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x, y, z, w; } V4;
typedef struct {
    u8 en;
    u8 pad[3];
    f32 x;
    f32 y;
    u8 pad2[0x10];
    void *h;
} Obj;

extern void func_001F3D80(void *, f32 *, s32);
extern void func_001ED8B0(void *, V4 *);
extern void func_001EDA50(void *, V4 *);

void func_002E1920(Obj *o, f32 x, f32 y) {
    V4 v;
    if (o->en != 0) {
        o->x = x;
        o->y = y;
        if (M2C_FIELD(o, s32 *, 0) & 0x100) {
            func_001F3D80(o->h, &o->x, 0);
        } else {
            func_001ED8B0(o->h, &v);
            v.x = x;
            v.y = y;
            func_001EDA50(o->h, &v);
        }
    }
}
