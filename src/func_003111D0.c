/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x1C];
    s8 value;
    u8 pad1D[0x2D7];
} Rec2F4;

extern char D_00CB3300[];

s32 func_003111D0(s32 *out, u8 id) {
    *out = M2C_FIELD(D_00CB3300, Rec2F4 **, 0)[id].value;
    return 1;
}
