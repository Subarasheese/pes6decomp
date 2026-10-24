/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x13];
    u8 pending;
} Ctx;

extern Ctx *D_00520080[];
s32 func_00187460(void);

s32 func_00188640(void) {
    s32 r = 0;

    if (D_00520080[0]->pending != 0) {
        r = func_00187460();
    }
    return r;
}
