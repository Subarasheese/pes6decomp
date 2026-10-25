/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x24];
    s32 a;
    s32 b;
} Obj;

void func_001D7880(s32, f32);

void func_00363D40(Obj *obj, f32 v) {
    func_001D7880(obj->a, v);
    if (obj->b != 0) {
        func_001D7880(obj->b, v);
    }
}
