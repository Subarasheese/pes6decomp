/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 type;
    u8 off;
    u8 pad[0x1E];
    void *h;
} Obj;

extern void func_001F18D0(void *);
extern void func_001EEE60(void *);

s32 func_002F1420(Obj *o) {
    s32 r = 1;
    if (o->off != 0) {
        return 0;
    }
    switch (o->type) {
    case 1:
        func_001F18D0(o->h);
        break;
    case 2:
        func_001EEE60(o->h);
        break;
    default:
        r = 0;
        break;
    }
    return r;
}
