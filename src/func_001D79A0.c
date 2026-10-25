/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Ent {
    u8 pad[2];
    u16 id;
    u8 pad4[4];
    s16 off;
    u8 padA[4];
} Ent;

typedef struct Hdr {
    u8 pad[2];
    u8 count;
    u8 pad3[5];
    u16 base;
    u8 padA[0xA];
    Ent *ents;
} Hdr;

typedef struct Obj {
    u8 pad[0x1C];
    Hdr *hdr;
    u8 pad20[0x58];
    f32 f78;
} Obj;

f32 func_001D79A0(Obj *o, u16 id) {
    Hdr *h;
    s32 i;
    Ent *e;
    s32 n;
    if (o != NULL) {
        h = o->hdr;
        n = h->count;
        e = h->ents;
        for (i = 0; i < n; i++, e++) {
            if (id == e->id) {
                return o->f78 + (f32)(h->base + e->off);
            }
        }
        return 0.0f;
    }
    return 0.0f;
}
