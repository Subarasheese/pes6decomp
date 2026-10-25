/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    f32 scale;
    u8 pad10[0x10];
} Obj20;

void func_001C48E8(void *, s32, s32);

s32 func_00131B00(Obj20 *obj) {
    func_001C48E8(obj, 0, sizeof(Obj20));
    obj->scale = 1.0f;
    return 0;
}
