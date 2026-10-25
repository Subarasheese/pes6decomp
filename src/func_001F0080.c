/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 value;
} Ent;

Ent *func_001F00C0(void *);

s32 func_001F0080(void *obj) {
    Ent *ent;

    if (obj == NULL) {
        return 0;
    }
    ent = func_001F00C0(obj);
    if (ent == NULL) {
        return 0;
    }
    return ent->value;
}
