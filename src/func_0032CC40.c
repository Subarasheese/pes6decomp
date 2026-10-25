/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[0x58]; s32 fn; s32 t; } O;
s32 func_00340C80(f32);
s32 func_0032CC20(void);

s32 func_0032CC40(O *o, s32 b) {
    if (o->t + func_00340C80(7.0f) < b) {
        o->fn = (s32)func_0032CC20;
    }
    return 1;
}
