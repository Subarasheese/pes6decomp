/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 c[4];
} Color;

typedef struct {
    u8 pad0[0x48];
    Color color;
} Obj;

void func_001DEFD0(Obj *obj, Color *out) {
    if (obj != NULL && out != NULL) {
        *out = obj->color;
    }
}
