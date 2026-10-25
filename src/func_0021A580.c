/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 state;
    s16 x;
    s16 y;
    u8 pad10[0x28];
    char name[0x8C];
    char *path;
} Obj;

extern s32 D_00538224[];
extern s32 D_00538228[];
extern s32 D_0053822C[];
extern s32 D_00538230[];
extern char *D_00538234[];
extern s32 D_003A91B0[];
s32 func_001159F8(s32);

s32 func_0021A580(Obj *obj) {
    s32 ret;
    s32 r;

    D_00538228[0] = 0;
    D_0053822C[0] = D_003A91B0[0];
    ret = func_001159F8(D_003A91B0[0]);
    D_00538224[0] = 0;
    r = 0;
    if (ret == 0) {
        obj->state = 0;
        r = -0x7F;
    }
    return r;
}
