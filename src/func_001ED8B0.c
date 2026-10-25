/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    u8 pad0[0x20];
    QVec vec;
} Obj30;

void func_001ED8B0(Obj30 *obj, QVec *out) {
    if (obj == NULL) {
        return;
    }
    if (out == NULL) {
        return;
    }
    *out = obj->vec;
}
