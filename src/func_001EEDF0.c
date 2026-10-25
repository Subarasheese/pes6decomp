/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xA3];
    u8 tab[4][4];
    u8 padB3[0x6B];
    u8 flags;
} Obj;

void func_001EEDF0(Obj *obj, s32 i, u8 v) {
    s32 ok;

    if (obj != NULL && i >= 0 && i < 4) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    if (obj->tab[i][0] == v) {
        return;
    }
    obj->tab[i][0] = v;
    obj->flags |= 2;
}
