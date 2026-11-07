/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 c[4];
} Color;

typedef struct {
    u8 pad0[0x50];
    Color color;
} Obj54;

void func_001F18D0(Obj54 *obj, Color *color) {
    if (obj == NULL) {
        return;
    }
    if (color == NULL) {
        return;
    }
    obj->color = *color;
}
