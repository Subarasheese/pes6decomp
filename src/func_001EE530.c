/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 c[4];
} Color;

typedef struct {
    u8 pad0[0xA0];
    Color value;
} Obj;

void func_001EE530(Obj *obj, Color *out) {
    s32 ok;

    if (obj != NULL && out != NULL) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    *out = obj->value;
}
