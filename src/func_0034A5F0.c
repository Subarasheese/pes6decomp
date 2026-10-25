/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { u8 p[8]; u8 f; } Q;
typedef struct { u8 p[0x40]; Q *q; } O;
extern s32 D_003E6228[];
s32 func_0034A710(s32);
void func_003387D0(O *, s32 (*)(s32), s32 *);

s32 func_0034A5F0(O *o) {
    if (o->q->f == 0) return 0;
    func_003387D0(o, func_0034A710, D_003E6228);
    return 1;
}
