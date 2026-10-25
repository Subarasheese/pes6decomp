/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    u8 pad0[0x70];
    QVec vec;
} Obj80;

void func_001D7BE0(Obj80 *obj, QVec *out) {
    if (obj == NULL) {
        return;
    }
    if (out == NULL) {
        return;
    }
    *out = obj->vec;
}
