/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 state;
    u8 padC[0x78];
    s32 handle;
} Obj;

extern s32 D_00538224[];
extern s32 D_00538228[];
extern s32 D_0053822C[];
extern s32 D_00538230[];
extern char *D_00538234[];
s32 func_001166F8(s32);

s32 func_00218EC0(Obj *obj) {
    s32 ret;
    s32 r;
    s32 handle = obj->handle;

    D_00538228[0] = 0;
    D_0053822C[0] = handle;
    ret = func_001166F8(handle);
    D_00538224[0] = 0;
    r = 0;
    if (ret == 0) {
        obj->state = 0;
        r = -0x7F;
    }
    return r;
}
