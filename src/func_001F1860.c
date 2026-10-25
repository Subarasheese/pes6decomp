/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 unk0;
    u8 flags;
    u8 pad2[0x46];
    s32 value;
    u8 pad4C[0x8];
    s32 enabled;
} Obj58;

void func_001F1860(Obj58 *obj, s32 value) {
    if (obj == NULL) {
        return;
    }
    if (obj->enabled == 0) {
        return;
    }
    if (obj->value != value) {
        obj->value = value;
        obj->flags |= 2;
    }
}
