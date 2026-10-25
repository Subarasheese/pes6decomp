/* compiler: mwcc-3.0.1b210-O2 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x28];
    f32 value;
    u8 pad2C[0xE];
    u8 flags;
} Obj3A;

void func_001ED880(Obj3A *obj, f32 value) {
    if (obj == NULL) {
        return;
    }
    if (obj->value == value) {
        return;
    }
    obj->value = value;
    obj->flags |= 1;
}
