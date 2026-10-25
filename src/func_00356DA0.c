/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[0x3C]; s32 v[1]; } O;
extern u8 D_003E9F94;
s32 func_003389D0(O *, s32);
void func_00349210(s32);
void func_00354E30(s32);
void func_00338930(O *);

s32 func_00356DA0(O *o) {
    s32 i = func_003389D0(o, 0);
    func_00349210(o->v[i]);
    func_00354E30(D_003E9F94);
    func_00338930(o);
    D_003E9F94 = 0;
    func_00338930(o);
    return 1;
}
