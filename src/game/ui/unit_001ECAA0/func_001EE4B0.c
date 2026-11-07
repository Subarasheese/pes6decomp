/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    u8 pad0[0x100];
    QVec value;
} Obj;

void func_001EE4B0(Obj *obj, QVec *out) {
    s32 ok;

    if (obj != NULL && out != NULL) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    *out = obj->value;
}
