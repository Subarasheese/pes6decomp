/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { u8 p[4]; s32 fn; u8 pad8[2]; u8 a; u8 b; } O;
s32 func_00341260(u8 *);
s32 func_0034A640(void);

s32 func_0034A6C0(O *o, u8 *p) {
    if (func_00341260(p + 0x74) == 0) return 0;
    o->fn = (s32)func_0034A640;
    o->a = 1;
    o->b = 0;
    return 1;
}
