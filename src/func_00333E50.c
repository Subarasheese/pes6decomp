/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0x2C]; s32 a; s32 b; } O;
s32 func_0030DAF0(s32);

s32 func_00333E50(O *o) {
    o->a = !func_0030DAF0(0);
    o->b = !func_0030DAF0(1);
    return 1;
}
