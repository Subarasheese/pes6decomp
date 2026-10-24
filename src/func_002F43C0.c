/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 d[36]; } Ent;
typedef struct {
    u8 b0;
    u8 b1;
    u8 pad2[6];
    s8 cur;
    u8 pad9[0xF3];
    Ent bank[2][33];
} Obj;

extern s32 func_002F14E0(Ent *, s32);

void func_002F43C0(Obj *o, s32 idx, s32 a2) {
    if (o != 0) {
        idx = idx > 7 ? 7 : (idx < 0 ? 0 : idx);
        if (func_002F14E0(&o->bank[(o->cur + 1) % 2][idx], a2) != 0) {
            o->b1 = 1;
        }
    }
}
