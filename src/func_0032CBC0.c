/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[4]; s32 a; u8 q[0x58]; s32 b; } P;
typedef struct { P *p; } O;
s32 func_00333600(s32);

s32 func_0032CBC0(O *o) {
    P *p;
    if (func_00333600(3) == 0) return 0;
    p = o->p;
    p->a = 0;
    p->b = 1;
    return 1;
}
