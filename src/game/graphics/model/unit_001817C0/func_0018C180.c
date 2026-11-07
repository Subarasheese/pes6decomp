/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u16 value;
    u16 pad;
} Ent;

typedef struct {
    s32 pad0;
    Ent ents[1];
} Tbl;

extern Tbl *D_00520130[];

void func_0018C180(s32 i, s32 v) {
    Tbl *t = D_00520130[0];

    if (t != NULL) {
        if (v == 0) {
            v = 1;
        }
        t->ents[i].value = v;
    }
}
