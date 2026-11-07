/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x6C];
    s32 size;
} Obj;

void func_001C48E8(void *, s32, s32);

s32 func_00313910(Obj *obj) {
    func_001C48E8(obj, 0, 0x70);
    obj->size = 0xF0;
    return 1;
}
