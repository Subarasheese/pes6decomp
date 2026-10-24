/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 type;
    u8 pad[0x1F];
    void *h;
} Obj;

extern void func_001F1990(void *);
extern void func_001F23E0(void *, void *);
extern void func_001C48E8(void *, s32, s32);

void func_002F1970(Obj *o, void *p) {
    switch (o->type) {
    case 1:
        func_001F1990(o->h);
        break;
    case 2:
        if (p == 0) {
            return;
        }
        func_001F23E0(p, o->h);
        break;
    default:
        return;
    }
    func_001C48E8(o, 0, 0x24);
}
