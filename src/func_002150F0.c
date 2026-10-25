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
s32 func_001165D8(s32, s32, char *);

s32 func_002150F0(Obj *obj) {
    s32 ret;
    s32 r;
    s32 x;
    s32 y;
    char *path;

    y = obj->y;
    x = obj->x;
    path = obj->path;
    D_00538228[0] = 0;
    D_0053822C[0] = x;
    D_00538230[0] = y;
    D_00538234[0] = path;
    ret = func_001165D8(x, y, path);
    D_00538224[0] = 0;
    r = 0;
    if (ret == 0) {
        obj->state = 0;
        r = -0x7F;
    }
    return r;
}
