/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 v[4]; } V4;
typedef struct {
    u8 pad0;
    u8 dirty;
    u8 pad2[0xA];
    V4 box;
} Obj;

extern void func_002EFBD0(void *, V4 *);

void func_002F3AE0(Obj *o, V4 *p) {
    V4 v = *p;
    if (o != 0) {
        if (M2C_FIELD(o, s32 *, 0x9FC) == 0) {
            v.v[1] -= 6.0f;
        }
        func_002EFBD0((u8 *)o + 0xC, &v);
        o->dirty = 1;
    }
}
