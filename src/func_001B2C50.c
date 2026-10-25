/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
    u8 pad8[0x3C];
    s32 data;
} Obj;

s32 func_001B06F0(s32);
void func_00153FA0(s32);
void func_001B2CB0(s32, s32, s32);

void func_001B2C50(Obj *obj) {
    s32 b = obj->b;
    s32 r = func_001B06F0(obj->data);

    func_00153FA0(obj->data);
    func_001B2CB0(b, r, obj->a);
    func_00153FA0(r);
}
