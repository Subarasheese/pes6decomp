/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x13];
    u8 pending;
} Ctx;

extern Ctx *D_00520080[];
s32 func_00187460(f32 *, f32 *);

s32 func_00188640(f32 *x, f32 *y) {
    s32 r = 0;

    if (D_00520080[0]->pending != 0) {
        r = func_00187460(x, y);
    }
    return r;
}
