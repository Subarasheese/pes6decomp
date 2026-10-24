/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x4B];
    u8 value;
    u8 pad4C[0x28];
    u8 flags;
} Obj75;

void func_001DF420(Obj75 *obj, u8 value) {
    if (obj == NULL) {
        return;
    }
    if (obj->value != value) {
        obj->value = value;
        obj->flags |= 4;
    }
}
