/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x1D];
    s8 flags;
    s8 busy;
} Obj;

extern void func_00132280(Obj *);

void func_00131D40(Obj *o) {
    if (o->busy != 0) {
        return;
    }
    if (!(((o->flags & 0x40) != 0) ^ ((o->flags & 8) != 0))) {
        return;
    }
    func_00132280(o);
    o->flags ^= 8;
}
