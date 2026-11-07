/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { u8 b[4]; } Col;

typedef struct Obj {
    u8 pad[0xA0];
    Col cols[4];
    u8 pad2[0x11E - 0xB0];
    u8 flags;
} Obj;

void func_001EF120(Obj *o, s32 idx, u8 *c) {
    s32 ok;
    if (o != NULL && idx >= 0 && idx < 4 && c != NULL) ok = 1; else ok = 0;
    if (!ok) return;
    if (o->cols[idx].b[0] == c[0] && o->cols[idx].b[1] == c[1] &&
        o->cols[idx].b[2] == c[2] && o->cols[idx].b[3] == c[3]) return;
    o->cols[idx] = *(Col *)c;
    o->flags |= 2;
}
