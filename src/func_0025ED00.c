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
s16 func_001454B0(s32);
s16 func_001454A0(s32);

void func_0025ED00(s32 index, s16 *out) {
    Obj *obj = D_0058D204[index].obj;

    out[0] = func_001454B0(obj->id);
    out[1] = func_001454A0(obj->id);
}
