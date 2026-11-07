/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x58];
    f32 x;
    f32 y;
} Obj;

void func_002EFA70(Obj *o, f32 *v) {
    if (o == 0 || v == 0) {
        return;
    }
    o->x = v[0] > 3.4028235e38f ? 3.4028235e38f : (v[0] < 0.0f ? 0.0f : v[0]);
    o->y = v[1] > 3.4028235e38f ? 3.4028235e38f : (v[1] < 0.0f ? 0.0f : v[1]);
}
