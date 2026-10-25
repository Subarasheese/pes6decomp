/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x18];
    s32 value;
    u8 pad1C[0x1C];
    u8 b0 : 1;
    u8 b1 : 1;
    u8 rest : 6;
} Obj;

extern s32 D_003E992C;
Obj *func_001BC060(s32);

void func_001BDAB0(s32 value) {
    Obj *obj;

    if (D_003E992C != 0) {
        obj = func_001BC060(D_003E992C);
        if (obj != NULL) {
            obj->value = value;
            obj->b1 = 1;
        }
    }
}
