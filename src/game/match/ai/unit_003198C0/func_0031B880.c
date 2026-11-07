/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x18];
    s32 id;
    u8 pad1C[0x24];
} Slot;

typedef struct {
    u8 pad0[0x74];
    Slot slots[10];
} Obj;

s32 func_0031B880(Slot **out, Obj *obj, s32 id) {
    s32 i;

    for (i = 0; i < 10; i++) {
        if (obj->slots[i].id == id) {
            *out = &obj->slots[i];
            return 1;
        }
    }
    *out = &obj->slots[0];
    return 0;
}
