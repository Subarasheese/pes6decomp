/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x74];
    u8 flags;
    u8 value;
} Obj76;

void func_001DF370(Obj76 *obj, s32 value) {
    if (obj == NULL) {
        return;
    }
    if (obj->value != value) {
        obj->value = value;
        obj->flags |= 1;
    }
}
