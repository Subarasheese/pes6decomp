/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0x1D]; u32 lo : 6; u32 f : 2; } Part;
typedef struct { u8 pad[0x10]; Part *a; Part *b; } Sub;
typedef struct {
    Sub *sub;
    u8 pad[0x2C];
    s32 x;
    u8 pad34[0xC];
    s32 y;
} Obj;

extern void func_002E7450(Obj *, s32);

void func_002E6390(Obj *o) {
    Sub *s = o->sub;
    Part *a = s->a;
    Part *b;
    s32 x;
    s32 y;
    if (a == 0) {
        x = 0;
        y = 0;
    } else {
        b = s->b;
        if (b == 0) {
            x = a->f;
            y = 0;
        } else {
            x = a->f;
            y = b->f;
        }
    }
    o->x = x;
    o->y = y;
    func_002E7450(o, 0);
    func_002E7450(o, 1);
}
