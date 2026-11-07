/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x1C];
    f32 x;
    f32 y;
    u8 pad24[0x50];
    u8 flags;
} Obj75;

void func_001DF750(Obj75 *obj, f32 x, f32 y) {
    if (obj == NULL) {
        return;
    }
    if (obj->x != x || obj->y != y) {
        obj->x = x;
        obj->y = y;
        obj->flags |= 2;
    }
}
