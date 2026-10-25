/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    u8 pad0[0x10];
    QVec vec;
    u8 pad20[0x15];
    u8 flags;
} Obj36;

void func_001ED580(Obj36 *obj, QVec *vec) {
    if (obj == NULL) {
        return;
    }
    if (vec == NULL) {
        return;
    }
    obj->vec = *vec;
    obj->flags |= 1;
}
