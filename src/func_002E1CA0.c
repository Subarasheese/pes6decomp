/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u32 flags;
    u8 pad[0x18];
    void *h;
} Obj;

extern void func_001F22B0(void *);
extern void func_001EDD90(void *);
extern void func_001C48E8(void *, s32, s32);

void func_002E1CA0(Obj *o) {
    u32 f = o->flags;
    if ((f & 0xFF) != 0) {
        if (f & 0x100) {
            func_001F22B0(o->h);
        } else {
            func_001EDD90(o->h);
        }
        func_001C48E8(o, 0, 0x24);
    }
}
