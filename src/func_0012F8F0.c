/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x4];
    u32 flags;
} Desc;

typedef struct {
    Desc *desc;
    u8 pad4[0x124];
    void *table;
} Obj12C;

extern char D_00375BA0[];
extern char D_00375BD0[];

void func_0012F8F0(Obj12C *obj) {
    if (obj->desc == NULL) {
        obj->table = NULL;
        return;
    }
    if (obj->desc->flags & 2) {
        obj->table = D_00375BA0;
    } else {
        obj->table = D_00375BD0;
    }
}
