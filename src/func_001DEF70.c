/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x54];
    f32 value;
    u8 pad58[0x1C];
    u8 flags;
} Obj74;

void func_001DEF70(Obj74 *obj, f32 value) {
    if (obj == NULL) {
        return;
    }
    if (obj->value == value) {
        return;
    }
    obj->value = value;
    obj->flags |= 2;
}
