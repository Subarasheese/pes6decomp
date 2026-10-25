/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0xC]; void *h; } Obj;

extern Obj *func_001D6820();
extern void func_001F4B00(Obj *, s32);
extern void func_001EDA30(void *, s32);
extern void func_001ED840(void *, s32);
extern void *func_001D67E0(Obj *);
extern void func_001EF900(void *, s32);

Obj *func_002F9A50(s32 a, s32 b, s32 n) {
    Obj *o;
    s32 i;
    o = func_001D6820();
    func_001F4B00(o, 1);
    func_001EDA30(o->h, 1);
    func_001ED840(o->h, 3);
    for (i = 0; i < n; i++) {
        func_001EF900(func_001D67E0(o), 0);
    }
    if (o != 0) {
        func_001EDA30(o->h, 3);
    }
    return o;
}
