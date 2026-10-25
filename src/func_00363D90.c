/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    s32 a;
    s32 b;
    s32 c;
} Obj2C;

void func_001D7D60(s32, u8);

void func_00363D90(Obj2C *obj, s32 value) {
    if (obj == NULL) {
        return;
    }
    func_001D7D60(obj->a, value);
    func_001D7D60(obj->b, value);
    func_001D7D60(obj->c, value);
}
