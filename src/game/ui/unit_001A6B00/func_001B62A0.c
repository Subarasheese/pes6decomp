/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x18];
    u8 lo18 : 3;
    u8 f18 : 1;
    u8 hi18 : 4;
    u8 pad19[0x43];
    u8 lo5C : 4;
    u8 f5C : 1;
    u8 hi5C : 3;
    u8 pad5D[0x17];
    f32 scale;
} Obj;

extern Obj D_005228F0;

void func_001B62A0(void) {
    Obj *obj = &D_005228F0;

    if (obj != NULL) {
        obj->scale = 160.0f;
        obj->f5C = 1;
        obj->f18 = 1;
    }
}
