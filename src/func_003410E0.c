/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s32 t; u8 p[0x1D]; u8 f; } O;

s32 func_003410E0(O *o) {
    if (o == 0) return 0;
    if (o->t != 1) return 0;
    return o->f == 0x10;
}
