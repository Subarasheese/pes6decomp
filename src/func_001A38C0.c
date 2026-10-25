/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    f32 x;
    f32 y;
    f32 z;
} Obj5C;

extern char D_005203B4[];

void func_001A38C0(f32 *out) {
    out[0] = M2C_FIELD(D_005203B4, Obj5C **, 0)->x;
    out[1] = M2C_FIELD(D_005203B4, Obj5C **, 0)->y;
    out[2] = M2C_FIELD(D_005203B4, Obj5C **, 0)->z;
}
