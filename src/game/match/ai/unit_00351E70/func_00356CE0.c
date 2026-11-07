/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[0x3C]; s32 v[1]; } O;
s32 func_003389D0(O *, s32);
void func_00356A90(s32);
void func_00338930(O *);

s32 func_00356CE0(O *o) {
    s32 i = func_003389D0(o, 0);
    func_00356A90(o->v[i]);
    func_00338930(o);
    return 1;
}
