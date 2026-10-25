/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x2];
    u8 kind;
} Obj3;

Obj3 *func_001D61A0(s32, s32, s32);

s32 func_001D6C80(s32 owner, s32 key) {
    if (owner != 0) {
        Obj3 *obj = func_001D61A0(owner, 1, key);

        if (obj == NULL) {
            return 4;
        }
        return obj->kind & 7;
    }
    return 4;
}
