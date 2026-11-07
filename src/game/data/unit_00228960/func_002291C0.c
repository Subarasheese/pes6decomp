/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    u32 flags;
} Ctx;

extern Ctx *D_003E77B0;
s32 func_00231240(void);

s32 func_002291C0(void) {
    if (func_00231240() == 1) {
        return 0;
    }
    return (u64)D_003E77B0->flags & 0x2000000;
}
