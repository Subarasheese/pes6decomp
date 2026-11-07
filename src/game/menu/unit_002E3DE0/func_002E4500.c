/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x, y, z; } P3;
typedef struct {
    u8 pad0[4];
    f32 x;
    f32 y;
    u8 padC[0xC];
    void *h;
} Obj;

extern void func_001F3D80(void *, void *, s32);
extern void func_001F3C80(void *, f32);

void func_002E4500(Obj *o, P3 *p) {
    if (o == 0 || p == 0) {
        return;
    }
    o->x = p->x;
    o->y = p->y;
    func_001F3D80(o->h, &o->x, 0);
    func_001F3C80(o->h, p->z);
}
