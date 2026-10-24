/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x16];
    s16 value;
    u8 pad18[0x2DC];
} Rec2F4;

extern char D_00CB3300[];

s16 func_00310D20(u8 id) {
    return M2C_FIELD(D_00CB3300, Rec2F4 **, 0)[id].value;
}
