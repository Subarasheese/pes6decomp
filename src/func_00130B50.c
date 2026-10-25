/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x80];
    f32 a[4];
    f32 b[4];
} Obj;

extern f32 *D_003FB788[];
extern f32 *D_003FB78C[];

void func_00130B50(Obj *o) {
    f32 *a = D_003FB788[0];
    f32 *b = D_003FB78C[0];

    D_003FB788[0] = a + 4;
    D_003FB78C[0] = b + 4;
    o->a[0] = a[0];
    o->a[1] = a[1];
    o->a[2] = a[2];
    o->a[3] = a[3];
    o->b[0] = b[0];
    o->b[1] = b[1];
    o->b[2] = b[2];
    o->b[3] = b[3];
}
