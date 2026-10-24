/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x74];
    u8 a;
    u8 b;
} Obj;

void func_001DF2B0(Obj *obj) {
    if (obj == NULL) {
        return;
    }
    if (obj->b & 0x10) {
        obj->b &= ~0x10;
        obj->a |= 1;
    }
}
