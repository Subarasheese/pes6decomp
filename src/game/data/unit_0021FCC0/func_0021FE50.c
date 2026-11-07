/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    s32 a;
    s32 b;
} Obj;

extern Obj D_003A9840[];

void func_0021FE50(s32 v) {
    Obj *obj = D_003A9840;

    if (v <= 0 || v >= 28) {
        v = 1;
    }
    obj->a = v;
    obj->b = v;
}
