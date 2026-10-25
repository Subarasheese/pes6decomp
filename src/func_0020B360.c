/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xA];
    u8 level;
} Obj;

extern Obj *D_003E99DC;

void func_0020B360(u8 level) {
    Obj *obj = D_003E99DC;

    if (obj == NULL) {
        return;
    }
    if (level < 11) {
        obj->level = level;
    } else {
        obj->level = 10;
    }
}
