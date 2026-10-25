/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x8];
    s32 id;
} Obj;

typedef struct {
    Obj *obj;
    u8 pad4[0x14];
} Entry18;

extern Entry18 D_0058D204[];
s32 func_001454B0(s32);
s32 func_001454A0(s32);

s32 func_0025EC80(s32 index) {
    s32 id = D_0058D204[index].obj->id;
    s32 a = func_001454B0(id);

    return a * func_001454A0(id);
}
