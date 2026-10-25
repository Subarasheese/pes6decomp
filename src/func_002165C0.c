/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    s32 value;
    u8 pad24[0x8C];
    s32 *out;
} Obj;

extern s32 D_00537B50[];
extern s32 D_00537B54[];

s32 func_002165C0(Obj *obj) {
    s32 *out = obj->out;
    s32 value = obj->value;

    if (D_00537B50[0] == 1) {
        *out = D_00537B54[0];
    } else {
        *out = value;
    }
    D_00537B54[0] = 0;
    D_00537B50[0] = 0;
    return -0x80;
}
