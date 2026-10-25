/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Obj {
    u8 pad[4];
    s16 f4;
    s16 f6;
    u8 pad8[4];
    u32 flags;
} Obj;

void func_0021CD70(Obj *o, s32 v) {
    s32 st;
    switch (v) {
    case 0:
        st = 0;
        break;
    case -1:
        st = 1;
        break;
    case -2:
        st = 2;
        break;
    default:
        st = -1;
        break;
    }
    if (o->f4 != 0 && st == 0) {
        switch (o->f6) {
        case -1:
            st = 1;
            break;
        }
    }
    if (st == 0) return;
    {
        u32 fl;
        if (st == 2 && o->f6 == 2) goto end;
        o->f6 = st;
        fl = o->flags;
        if (st > 0) {
            fl |= 2;
        } else if (st < 0) {
            fl |= 1;
        }
        o->flags = fl;
    }
end:;
}
