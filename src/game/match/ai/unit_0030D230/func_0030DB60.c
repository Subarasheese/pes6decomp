/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    s16 value;
    u8 padE[0x2E6];
} Rec2F4;

extern char D_00CB3300[];

s16 func_0030DB60(u8 id) {
    return M2C_FIELD(D_00CB3300, Rec2F4 **, 0)[id].value;
}
