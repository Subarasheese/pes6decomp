/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Tbl {
    u8 pad[4];
    s32 *entries;
} Tbl;

typedef struct Res {
    u8 pad[0x10];
    Tbl *tbl;
} Res;

typedef struct Obj {
    u8 pad0[0x1C];
    s32 f1C;
    u16 *f20;
    u8 pad24[8];
    Res *res;
    u8 pad30[0x14];
    s32 f44;
    u8 pad48[4];
    s16 f4C;
    s16 f4E;
    u8 pad50[0x56];
    u8 fA6;
} Obj;

extern u16 *func_001D4F70(Res *, s32, s16);
extern void func_001D81D0(Obj *);
extern void func_001D7FA0(Obj *);
extern void func_001D6270(Obj *);

void func_001D7D80(Obj *o, s16 id) {
    u16 *p;
    if (o == NULL) return;
    o->f4C = 0;
    if (o->f4E == id) return;
    p = func_001D4F70(o->res, o->f44, id);
    if (p != NULL) {
        o->f4E = id;
        o->f20 = p;
        o->f1C = o->res->tbl->entries[*p];
        o->f4C = 0;
        func_001D81D0(o);
        func_001D7FA0(o);
        o->fA6 = 0xFF;
    }
    func_001D6270(o);
}
